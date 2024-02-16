#pragma once
class Point
{
	float x;
	float y;
public:
	Point()
	{
		x = 2;
		y = 5;
	}
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	float GetX()
	{
		return x;
	}

	float GetY()
	{
		return y;
	}

	void SetX(float x)
	{
		this->x = x;
	}

	void SetY(float y)
	{
		this->y = y;
	}

	
};

