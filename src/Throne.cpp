#include "Throne.h"
#include <algorithm>
#include "project_declarations.h"
#include <iostream>
#include <random>
#include <assert.h>

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

	std::random_device rd;
	std::uniform_int_distribution<unsigned int> dist(1, std::numeric_limits<unsigned int>::max() >> 1);

	for (unsigned int i = 0; i < count; ++i)
	{
		unsigned int weight = dist(rd);
		
		// na wszelki wypadek
		while (weight >= std::numeric_limits<unsigned int>::max() - 10000)
			weight = dist(rd);

		unsigned int strength = weight;
		while (strength <= weight)
		{
			strength = weight + dist(rd);
		}
		addTurtle(weight, strength);
	}
}

void Throne::printTurtles() const
{
	for (auto& t : turtles)
		std::cout << t << std::endl;
}

void Throne::clear()
{
	turtles.clear();
}
