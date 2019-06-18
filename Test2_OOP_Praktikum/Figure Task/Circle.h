#pragma once
#include "Figure.h"
class Circle :public Figure
{
private:
	double radius;
public:
	Circle();
	Circle(const Circle&);
	Circle(const char*, double);

	double givePerimetre();
	double giveArea();
	Circle* clone() const;
	void Print();
};

