#pragma once
#include <iostream>
#include <math.h>

class Point
{
	double x;
	double y;

public:
	Point(double x_, double y_) : x{ x_ }, y{ y_ }{}
	Point() : Point{ 0,0 } {}
	Point(const Point& obj) : x{ obj.x }, y{ obj.y }{}
	~Point() {}

	void setX(double value);
	void setY(double value);

	double getX() const;
	double getY() const;

	void display() const;
	void write();

	static bool isEquel(const Point& obj_, const Point& _obj)
	{
		return _obj.x == obj_.x and _obj.y == obj_.y;
	}
	/*bool isEquel(const Point& obj_) { return this->x == obj_.x and this->y == obj_.y; }*/

	static Point add(const Point& obj_, const Point& _obj)
	{
		return Point{ obj_.x + _obj.x, obj_.y + _obj.y };
	}

	Point operator+(const Point& obj_)
	{
		return Point{ obj_.x + this->x, obj_.y + this->y };
	}

	static Point multi(const Point& obj, double value)
	{
		return Point{ obj.x * value, obj.y * value };
	}

	static double distance(const Point& obj_, const Point& _obj)
	{
		return sqrt(pow(obj_.x - _obj.x, 2) + pow(obj_.y - _obj.y, 2));
	}
};

