#include "Throne.h"
#include <algorithm>
#include "project_declarations.h"
#include <iostream>

void Throne::addTurtle()
{
	turtles.push_back(Turtle());
}

void Throne::addTurtle(unsigned int weight, unsigned int strength)
{
	turtles.push_back(Turtle(weight, strength));
}

void Throne::generateTurtles()
{
	int max = rand() % MAX_TURTLES;
	for (int i = 0; i < max; ++i)
		addTurtle();
}

void Throne::generateTurtles(unsigned int count)
{
	turtles.clear();
	count = (count > MAX_TURTLES ? MAX_TURTLES : count);

	for (unsigned int i = 0; i < count; ++i)
		addTurtle();
}

void Throne::printTurtles() const
{
	for (auto& t : turtles)
		std::cout << t << std::endl;
}