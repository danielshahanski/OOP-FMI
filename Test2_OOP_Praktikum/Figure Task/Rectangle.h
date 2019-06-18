#pragma once
#include "Figure.h"
class Rectangle :public Figure
{
private:
	double sideA;
	double sideB;
public:
	Rectangle();
	Rectangle(const Rectangle&);
	Rectangle(const char*, double, double);

	double givePerimetre();
	double giveArea();
	Rectangle* clone() const;
	void Print();
};

