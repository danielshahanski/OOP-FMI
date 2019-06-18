#pragma once
#include "Figure.h"
class Triangle :public Figure
{
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle();
	Triangle(const Triangle&);
	Triangle(const char*, double, double, double);
	//Triangle& operator=(const Triangle&);

	double givePerimetre();
	double giveArea();
	Triangle* clone() const;
	void Print();
};

