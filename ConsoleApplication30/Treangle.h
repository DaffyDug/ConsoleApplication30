#pragma once
#include "Point.h"
#include <iostream> 
class Treangle
{
	float ab;
	float bc;
	float ca;
	float Lenght(Point a, Point b)
	{
		float l = sqrt(pow(a.GetX() - b.GetX(), 2) + pow(a.GetY() - b.GetY(), 2));
		return l;
	}
public:
	Treangle()
	{

	}
	Treangle(Point A, Point B, Point C)
	{
		ab = Lenght(A, B);
		bc = Lenght(B, C);
		ca = Lenght(C, A);
	}
	float P()
	{
		return (ab + bc + ca);
	}

	float S()
	{

		float Pp = (ab + bc + ca) / 2;
		return sqrt(Pp * (Pp - ab) * (Pp - bc) * (Pp - ca));
	}
	float getA()
	{
		return ab;
	}

	float getB()
	{
		return bc;
	}

	float getC()
	{
		return ca;
	}

};

