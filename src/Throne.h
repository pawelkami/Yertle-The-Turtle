#ifndef THRONE_H
#define THRONE_H

#include <vector>
#include "Turtle.h" 

class Throne
{
protected:
	std::vector<Turtle> turtles;
	virtual void addTurtle();
public:
	virtual void addTurtle(unsigned int weight, unsigned int strength);
	virtual void generateTurtles();
	virtual void generateTurtles(unsigned int count);
	virtual void printTurtles() const;
	virtual void clear();
	virtual double getTn(const unsigned int problemSize) const = 0;
	virtual unsigned int solve() = 0;
};

#endif
