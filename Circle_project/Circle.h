#pragma once
#include <iostream>
using namespace std;

class Circle
{
	friend bool operator==(const Circle& obj, const Circle& _obj)
	{
		return obj.radius == _obj.radius;
	}

	friend bool operator>(const Circle& obj, const Circle& _obj)
	{
		return obj.circumference > _obj.circumference;
	}

	friend bool operator<(const Circle& obj, const Circle& _obj)
	{

		return obj.circumference < _obj.circumference;
	}
	friend Circle operator+=(Circle& obj, double r)
	{
		  obj.radius += r;
		  obj.circumference = 2 * 3.14 * obj.radius;
		  return obj;
	}
	friend Circle operator-=(Circle& obj, double r)
	{
		obj.radius -= r;
		obj.circumference = 2 * 3.14 * obj.radius;
		return obj;
	}

	friend ostream& operator<<(ostream& output, const Circle& obj)
	{
		output << obj.radius << " " << obj.circumference;
		return output;
	}


private:
	double radius;
	double circumference ;
public:
	Circle(double _radius) : radius{ _radius }, circumference{ 2 * radius * 3.14 }{}
	Circle(const Circle& obj) : radius{ obj.radius }, circumference{ 2 * obj.radius * 3.14 }{}
	~Circle(){}

	void setRadius(double _radius) {
		this->radius = _radius;
	}

	void setCircumference(double _circumference) {
		this->circumference = _circumference;
		this->radius = _circumference / 3.14 / 2;
	}

	double getRadius() const {
		return this->radius;
	}
	double getCircumference() const {
		return this->circumference;
	}

};

