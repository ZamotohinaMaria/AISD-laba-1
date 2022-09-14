#pragma once

class Vectors
{
private:
	unsigned size;
	double* vector;
public:
	Vectors(unsigned size = 0);
	Vectors(const Vectors& v);
	~Vectors();
	Vectors& operator = (const Vectors& v);
	double& operator [] (const unsigned& i);
	Vectors& operator + (const Vectors& v);
	Vectors& operator - (const Vectors& v);
	double& operator * (const Vectors& v);
	Vectors& operator * (const int& c); //обспечить коммутативность
	Vectors& operator / (const int& c);
};