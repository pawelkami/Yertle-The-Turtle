#ifndef THRONE_H
#define THRONE_H

#include "Turtle.h"
#include <vector>

const int MAX_TURTLES = 5607;

class Throne
{
private:
	/*!
	*   Collection of a turtles.
	*/
	std::vector<Turtle> turtles;

	/*!
	*   Method generates new Turtles(with random attributes) and adds them to collection.
	*/
	void addTurtle();

public:
	Throne();
	~Throne();

	/*!
	*   Method generates new Turtles with given attributes and adds them to collection.
	*	After adding - it sorts a collection.
	*/
	void addTurtle(unsigned long long weight, unsigned long long strength);
	void generateTurtles();
	void generateTurtles(unsigned int count);
	int solveDynamicProgramming();

	void printTurtles() const;
};

#endif // THRONE_H

