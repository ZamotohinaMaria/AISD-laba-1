// variant 1(2)
#include <iostream>
#include <cmath>
#include "Vectors.h"

using namespace std;

//std::ostream& operator<< (std::ostream& out, const Vectors& point)
//{
//	out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ')';
//	return out;
//}

std::ostream& operator<< (std::ostream& out, const Vectors& v)
{
	out << "Vector: ";
	for (int i = 0; i < v.size; i++)
	{
		out << v.vector[i] << " ";
	}
	return out;
}

template <class T>
Vectors operator * (const T& c, const Vectors& v)
{
	Vectors res(v.GetSize());
	for (int i = 0; i < v.GetSize(); i++)
	{
		res.operator[](i) = v.operator[](i) * c;
	}
	return res;
}

int main()
{
	Vectors a, b, c;
	a.SetVector();
	b.SetVector();
	
	try
	{
		c = (a+b) * 0.5;
		c.PrintVector();
		cout << "vector a:";
		cout << a << endl;
		cout << "vector b:";
		cout << b << endl;
		cout << "vector c:";
		cout << c << endl;
	}
	catch (const char* exp)
	{
		cout << endl<< exp << endl;
	}
	return 0;
}
