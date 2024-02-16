#pragma once
#include "Treangle.h"
class Prism
{
	Treangle _treangle;
	float _h;
public:
	Prism(Treangle treangle, float h)
	{
		_treangle = treangle;
		_h = h;
	}
	float V()
	{
		return S()* _h;
	}
	float P()
	{
		return _treangle.P()*2+3*_h;
	}
	float S()
	{
		return _treangle.S() * 2 + _treangle.getA() * _h + _treangle.getB() * _h + _treangle.getC() * _h;
	}

};

