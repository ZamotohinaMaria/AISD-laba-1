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

Vectors operator * (const int& c, const Vectors& v)
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
	
	cout << "vector a: ";
	a.PrintVector();
	//cout << a;
	try
	{
		// c=1/2(a+b)
		//c = (a.operator+(b));
		//c.PrintVector();
		c = (a.operator+(b)).operator*(0.5);
		//c.operator=((a.operator+(b)).operator*(0.5));
		c.PrintVector();
		cout << "vector c:";
		cout << c << endl;
	}
	catch (const char* exp)
	{
		cout << exp << endl;
	}
	return 0;
}