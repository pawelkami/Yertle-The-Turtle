#include "ThroneFast.h"
#include <algorithm>
#include <math.h>

using namespace std;


unsigned int ThroneFast::solve()
{
	sort(turtles.begin(), turtles.end());
	
	unsigned int maxHeight = 0;
	
	maxHeight = max(maxHeight, findThrone());
	
	return maxHeight;
}

double ThroneFast::getTn(const unsigned int problemSize) const
{
	// T(n) = n*log(n) + n
	double res1 = problemSize*log2(problemSize);
	double res2 = problemSize;
	
	return res1 + res2;
}

unsigned int ThroneFast::findThrone()
{
	unsigned int stackWeight = 0, stackHeight = 0;
	auto lastTurtle = turtles.begin();
	for (auto it = turtles.begin(); it != turtles.end(); ++it)
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



