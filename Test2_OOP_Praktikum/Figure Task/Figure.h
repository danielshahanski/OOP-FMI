#pragma once
class Figure
{
protected:
	char* name;
public:
	Figure();
	Figure(const Figure&);
	Figure(const char*);
	Figure& operator=(const Figure&);
	virtual ~Figure() =0;

	void setName(const char*);
	char* getName();

	virtual Figure* clone() const = 0;
	virtual double givePerimetre() = 0;
	virtual double giveArea() = 0;
	virtual void Print()=0;
};

