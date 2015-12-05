#include "ThroneFast.h"
#include <algorithm>

using namespace std;


unsigned int ThroneFast::solve()
{
	sort(turtles.begin(), turtles.end());
	
	unsigned int maxHeight = 0;

	auto it = turtles.begin();		
	maxHeight = max(maxHeight, findThroneFromIterator(it));
	
	return maxHeight;
}

unsigned int ThroneFast::findThroneFromIterator(std::vector<Turtle>::iterator it)
{
	unsigned int stackWeight = 0, stackHeight = 0;
	auto lastTurtle = it;
	for (; it != turtles.end(); ++it)
	{
		if (lastTurtle->getCapacity() > it->getCapacity() && it->getCapacity() >= stackWeight)
		{
			if (lastTurtle->getStrength() > stackWeight + it->getWeight() )
			{
				stackWeight += it->getWeight();
				++stackHeight;
				continue;
			}
			
		}
		if (it->getCapacity() >= stackWeight)
		{
			++stackHeight;
			stackWeight += it->getWeight();
			lastTurtle = it;
		}
	}
	return stackHeight;
}



