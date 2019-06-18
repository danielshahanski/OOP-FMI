#include "pch.h"
#include "Rectangle.h"
#include <cstring>
#include <iostream>
using namespace std;

Rectangle::Rectangle():Rectangle("Rectangle", 2, 4)
{}

Rectangle::Rectangle(const Rectangle &other):Rectangle(other.name, other.sideA, other.sideB)
{}

Rectangle::Rectangle(const char* _name, double _a, double _b) :Figure(_name)
{
	this->sideA = _a;
	this->sideB = _b;
}

double Rectangle::givePerimetre()
{
	return 2 * (this->sideA + this->sideB);
}
double Rectangle::giveArea()
{
	return this->sideA*this->sideB;
}
Rectangle* Rectangle::clone() const
{
	return new Rectangle(*this);
}

void Rectangle::Print()
{
	cout << "name: " << this->name;
	cout << " side1: " << this->sideA;
	cout << " side2: " << this->sideB << endl;
}