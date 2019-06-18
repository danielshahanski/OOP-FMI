#include "pch.h"
#include "Circle.h"
#include <cstring>
#include <iostream>
using namespace std;

Circle::Circle() :Circle("Circle", 1)
{}

Circle::Circle(const Circle &other):Circle(other.name, other.radius)
{}

Circle::Circle(const char* _name, double _radius):Figure(_name)
{
	this->radius = _radius;
}


double Circle:: givePerimetre()
{
	const double pi = 3.14;
	return this->radius * 2 * pi;
}
double Circle:: giveArea()
{
	const double pi = 3.14;
	return this->radius * this->radius * pi;
}
Circle* Circle::clone() const
{
	return new Circle(*this);
}

void Circle::Print()
{
	cout << "name: " << this->name;
	cout << " radius: " << this->radius << endl;
}