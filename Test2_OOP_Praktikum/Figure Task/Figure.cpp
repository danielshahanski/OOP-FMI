#include "pch.h"
#include "Figure.h"
#include <cstring>
#include <iostream>
using namespace std;

Figure::Figure():Figure("Defalut Figure")
{}

Figure::Figure(const Figure& other):Figure(other.name)
{}

Figure::Figure(const char* _name):name(nullptr)
{
	setName(_name);
}

Figure& Figure:: operator=(const Figure& _other)
{
	if (this != &_other)
	{
		delete[] this->name;
		setName(_other.name);
	}
	return *this;
}

Figure::~Figure()
{
	delete[] this->name;
}


void Figure::setName(const char* _name)
{
	if (_name != nullptr)
	{
		delete[] this->name;
		this->name = new char[strlen(_name) + 1];
		strcpy_s(this->name, strlen(_name) + 1, _name);
	}
}
char* Figure::getName()
{
	return this->name;
}