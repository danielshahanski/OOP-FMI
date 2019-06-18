#pragma once
#include "Figure.h"

class Collection
{
private:
	Figure** item;
	int size;
	int capacity;

	void copy(const Collection&);
	void destroy();
	void resizeUp();
public:
	Collection();
	Collection(const Collection&);
	Collection& operator=(const Collection&);
	~Collection();

	bool isFull()const;
	int getSize();
	int getCapacity();

	void addFigure(const Figure&);
	double sumPerimetres()const;
	Figure& greatestArea()const;
};

