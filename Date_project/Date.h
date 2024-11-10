#pragma once
#include <iostream>
using namespace std;



class Date
{
	friend int operator-(Date& obj, const Date& _obj) 
	{
		return abs(obj.day - _obj.day + ((obj.month - _obj.month) * 30) + ((obj.year - _obj.year) * 360));
	}
	friend Date operator+(Date& obj, int day)
	{
		obj.day += day;

		if (obj.day > 30)
		{
			obj.day -= 30;
			obj.month += 1;
			if (obj.month > 12) 
			{
				obj.month -= 12;
				obj.year += 1;
			}
		}
		return obj;
	}

	friend ostream& operator<<(ostream& output, const Date& obj)
	{
		output << (obj.day<10 ? "0":"") << obj.day << "." << (obj.month < 10 ? "0" : "") << obj.month << "." << obj.year;
		return output;
	}

	friend istream& operator>>(istream& input, Date& obj)
	{
		input >> obj.day >> obj.month >> obj.year;
		return input;
	}



private:
	int day;
	int month;
	int year;
public:

	Date(int _day, int _month, int _year) : day{ _day }, month{ _month }, year{ _year }{}
	Date() : Date(1, 1, 1970){}
	Date(const Date& obj) : day{ obj.day }, month{ obj.month }, year{ obj.year }{}
	~Date() {}

	
	void setDay(int _day) 
	{
		this->day = _day;
	}
	void setMonth(int _month) 
	{
		this->month = _month;
	}
	void setYear(int _year) 
	{
		this->year = _year;
	}

	int getDay() {
		return day;
	}

	int getMonth() {
		return month;
	}

	int getYear() {
		return year;
	}

};

