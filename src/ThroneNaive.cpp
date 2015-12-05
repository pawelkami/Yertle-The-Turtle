#include "ThroneNaive.h"
#include <algorithm>
#include <list>
#include "Turtle.h"

using namespace std;



unsigned int ThroneNaive::solve()
{
	unsigned int maxHeight = 0;
	for (int i = 0; i < turtles.size(); ++i)
	{
		unsigned int stackWeight = 0, stackHeight = 0;
		for (int j = 0; j < turtles.size(); ++j)
		{
			if (i == j) continue; // don't compare turtle to itself
			int lastTurtle = i;
			if (turtles[lastTurtle].getCapacity() > turtles[j].getCapacity() && turtles[j].getCapacity() >= stackWeight)
			{
				if (turtles[lastTurtle].getStrength() > stackWeight + turtles[j].getWeight())
				{
					stackWeight += turtles[j].getWeight();
					++stackHeight;
					continue;
				}

			}
			if (turtles[j].getCapacity() >= stackWeight)
			{
				++stackHeight;
				stackWeight += turtles[j].getWeight();
				lastTurtle = j;
			}
		}
		maxHeight = std::max(maxHeight, stackHeight);
	}

	return maxHeight;
}