#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Type
{
	COMMERCIAL,
	MILLITARY,
	PRIVATE,
	CARGO
};


class Airplane
{
	friend bool operator<(const Airplane& obj, const Airplane& _obj)
	{
		return obj.max_passenger < _obj.max_passenger;
	}

	friend bool operator>(const Airplane& obj, const Airplane& _obj)
	{
		return obj.max_passenger > _obj.max_passenger;
	}

	friend bool operator==(const Airplane& obj, const Airplane& _obj)
	{
		return obj.type == _obj.type;
	}

	friend ostream& operator<<(ostream& output, const Airplane& obj)
	{
		output  << " " << obj.passenger << " " << obj.max_passenger;
		return output;
	}
private:
	Type type;
	int passenger;
	int max_passenger;

public:
	Airplane(Type _type, int _passenger, int _max_passenger) :type{ _type }, passenger{ _passenger }, max_passenger{ _max_passenger }{}
	Airplane(const Airplane& obj) :type{ obj.type }, passenger{ obj.passenger }, max_passenger{ obj.max_passenger }{}
	

	void setPassenger(int _passenger) {
		this->passenger = _passenger;
	}

	void setMaxPassenger(int _max_passenger) {
		this->max_passenger = _max_passenger;
	}

	
	int getPassenger() {
		return passenger;
	}
	int getMaxPassenger() {
		return max_passenger;
	}

	Airplane& operator++()
	{
		this->passenger += 1;
		return *this;
	}

	Airplane& operator--()
	{
		this->passenger -= 1;
		return *this;
	}
};

