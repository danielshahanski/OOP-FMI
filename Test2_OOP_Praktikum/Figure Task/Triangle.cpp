#include "pch.h"
#include "Triangle.h"
#include "Figure.h"
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle():Triangle("Triangle", 3, 4, 5)
{}

Triangle::Triangle(const Triangle& _other):Triangle(_other.name, _other.side1, _other.side2, _other.side3)
{}

Triangle::Triangle(const char* _name, double _side1, double _side2, double _side3):Figure(_name)
{
	this->side1 = _side1;
	this->side2 = _side2;
	this->side3 = _side3;
}

double Triangle::givePerimetre()
{
	return(this->side1 + this->side2 + this->side3);
}
double Triangle::giveArea()
{
	return sqrt((this->givePerimetre() / 2)*((this->givePerimetre() / 2) - this->side1)*
		((this->givePerimetre() / 2) - this->side2)*
		((this->givePerimetre() / 2) - this->side3));
}

Triangle* Triangle::clone() const
{
	return new Triangle(*this);
}

void Triangle::Print()
{
	cout << "name: " << this->name;
	cout << " side1: " << this->side1;
	cout << " side2: " << this->side2;
	cout << " side3: " << this->side3<<endl;
}