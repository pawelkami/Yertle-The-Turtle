#include "ThroneNaive.h"
#include <algorithm>
#include <list>
#include "Turtle.h"

using namespace std;

unsigned int ThroneNaive::solve()
{
	auto firstTurtle = min_element(turtles.begin(), turtles.end());	// putting first turtle on stack
	
	if (firstTurtle == turtles.end())	// if there are no turtles in vector, return 0
		return 0;

	unsigned int stackWeight = firstTurtle->getWeight(), stackHeight = 1;

	Turtle lastTurtle = *firstTurtle;
	turtles.erase(firstTurtle);	// erase first turtle from vector

	for (int i = 0; i < turtles.size(); ++i)
	{
		auto it = min_element(turtles.begin(), turtles.end());	// looking for the lightest turtle
		
		if (lastTurtle.getCapacity() > it->getCapacity() && it->getCapacity() >= stackWeight)	// if lastTurtle in stack has got better capacity than turtle that we found
																								// and new turtle can hold stack - we can maybe swap them on the top of stack
		{
			if (lastTurtle.getStrength() > stackWeight + it->getWeight())	// if lastTurtle can hold the stack with new turtle
			{
				stackWeight += it->getWeight();
				++stackHeight;
				turtles.erase(it);	// erasing current turtle from vector
				continue;
			}
		}

		if (it->getCapacity() >= stackWeight)	// if new turtle can hold current stack - push it on it
		{
			++stackHeight;
			stackWeight += it->getWeight();
			lastTurtle = *it;
		}

		turtles.erase(it);	// erasing current turtle from vector
	}

	return stackHeight;
}

double ThroneNaive::getTn(const unsigned int problemSize) const
{
	// T(n) = n + n*n
	return problemSize * problemSize + problemSize;
}
