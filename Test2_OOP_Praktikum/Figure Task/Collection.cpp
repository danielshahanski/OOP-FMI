#include "pch.h"
#include "Collection.h"
#include "Figure.h"
#include <iostream>
#include <cstring>
using namespace std;


Collection::Collection()
{
	this->size = 0;
	this->capacity = 8;
	this->item = new Figure*[this->capacity];
}

Collection::Collection(const Collection& other)
{
	copy(other);
}
Collection& Collection:: operator=(const Collection& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}
	return *this;
}

Collection::~Collection()
{
	destroy();
}

bool Collection::isFull()const
{
	return this->size == this->capacity;
}
int Collection::getSize()
{
	return this->size;
}
int Collection::getCapacity()
{
	return this->capacity;
}

void Collection::copy(const Collection&other)
{
	this->size = other.size;
	this->capacity = other.capacity;
	this->item = new Figure*[this->capacity];
	for (size_t i = 0; i < this->size; i++)
	{
		this->item[i] = other.item[i]->clone();
	}
}

void Collection::destroy()
{
	for (size_t i = 0; i < this->size; i++)
	{
		delete item[i];
	}
	delete[] item;
}

void Collection::resizeUp()
{
	this->capacity = this->capacity * 2;
	Figure** temp = new Figure*[this->capacity];
	for (size_t i = 0; i < this->size; i++)
	{
		temp[i] = item[i];
	}
	delete[] item;
	item = temp;
}

void Collection::addFigure(const Figure& other)
{
	if (isFull())
	{
		resizeUp();
	}
	item[size++] = other.clone();
}

Figure& Collection::greatestArea()const
{
	Figure* temp = this->item[0];
	for (size_t i = 0; i < this->size-1; i++)
	{
		if (item[i]->giveArea() < item[i+1]->giveArea())
		{
			temp = item[i + 1];
		}
	}
	return *temp;
}
double Collection::sumPerimetres() const
{
	double sum = 0;
	for (size_t i = 0; i < this->size; i++)
	{
		sum += item[i]->givePerimetre();
	}
	return sum;
}
