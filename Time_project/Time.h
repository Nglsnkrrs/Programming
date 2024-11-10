#pragma once
#include <iostream>

using namespace std;

class Time
{
	friend Time operator+=(Time& obj, const Time& _obj)
	{
		obj.hour += _obj.hour;
		obj.minute += _obj.minute;
		obj.second += _obj.second;

		if (obj.second >= 60) {
			obj.second %= 60;
			obj.minute += 1;	
		}
		if (obj.minute >= 60) {
			obj.minute %= 60;
			obj.hour += 1;
		}
		return obj;
	}
	friend Time operator-=(Time& obj, const Time& _obj)
	{
		abs(obj.hour -= _obj.hour);
		abs(obj.minute -= _obj.minute);
		abs(obj.second -= _obj.second);

		if (obj.second < 0) {
			obj.second = 59;
			obj.minute -= 1;
		}
		if (obj.minute < 0) {
			obj.minute = 59;
			obj.hour -= 1;
		}
		return obj;
	}

	friend bool operator!=(const Time& obj, const Time& _obj)
	{
		return obj.hour != _obj.hour or obj.minute != _obj.minute or obj.second != _obj.second;
	}
	friend bool operator==(const Time& obj, const Time& _obj)
	{
		return obj.hour == _obj.hour or obj.minute == _obj.minute or obj.second == _obj.second;
	}


	friend Time operator++(Time& obj, int sec)
	{
		obj.second += sec;
		while (obj.second >= 60) {
			obj.minute += 1;
			if (obj.minute >= 60) {
				obj.hour += 1;
			}

			obj.second += sec;
		}
		return obj;
	}



	friend ostream& operator<<(ostream& out, const Time& obj)
	{
		out << obj.hour << "." << obj.minute << "." << obj.second;
		return out;
	}
	friend istream& operator>>(istream& in, Time& obj)
	{
		in >> obj.hour;
		in.ignore(1);
		in >> obj.minute;
		in.ignore(1);
		in >> obj.second;
		return in;
	}


private:
	int hour;
	int minute;
	int second;
public:
	Time(int _hour, int _minute, int _second) :hour{ _hour }, minute{ _minute }, second{ _second }{}
	Time() : Time(0, 0, 0){}
	Time(const Time& obj) : hour{ obj.hour }, minute{ obj.minute }, second{ obj.second }{}

	void setHour(int hour) 
	{
		this->hour = hour;
	};
	void setMinute(int minute) 
	{
		this->minute = minute;
	};
	void setSecond(int second) 
	{
		this->second = second;
	};

	int getHour() 
	{
		return this->hour;
	};
	int getMinute() 
	{
		return this->minute;
	};
	int getSecond() 
	{
		return this->second;
	};


};

