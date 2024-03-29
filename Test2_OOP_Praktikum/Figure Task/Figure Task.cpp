// Figure Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iostream>
#include<cstring>
#include "Figure.h"
#include "Collection.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	Triangle t1 ("ravnostranen1", 3, 3, 3);
	cout <<  t1.getName() << endl;
	cout << "Area: " << t1.giveArea()<<endl;
	cout << "Perimetre: " << t1.givePerimetre() << endl<<endl;
	Rectangle r1("pravougulnik1", 2, 6);
	cout << r1.getName() << endl;
	cout << "Area: " << r1.giveArea() << endl;
	cout << "Perimetre: " << r1.givePerimetre() << endl << endl;
	Circle c1("okrujnost1", 10);
	cout << c1.getName() << endl;
	cout << "Area: "<< c1.giveArea() << endl;
	cout <<"Perimetre: "<< c1.givePerimetre() << endl << endl;
	Circle c2("okrujnost2", 7.5);
	cout << c2.getName() << endl;
	cout << "Area: " << c2.giveArea() << endl;
	cout << "Perimetre: " << c2.givePerimetre() << endl << endl;

	Collection example;
	example.addFigure(t1);
	example.addFigure(r1);
	example.addFigure(c2);
	example.addFigure(c1);
	cout << "The size ot example collection is: " << example.getSize() << endl;
	Figure* max = &example.greatestArea();
	cout << "The Biggest Area has ";
	max->Print();
	cout << "The Sum of the Perimetres is: " << example.sumPerimetres() << endl;
	return 0;
}