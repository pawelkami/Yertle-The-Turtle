// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#include "ThroneDynamicProgramming.h"
#include "Turtle.h"
#include <cstdlib>
#include <algorithm>
#include <array>
#include <memory>
#include <fstream>

using namespace std;


ThroneDynamicProgramming::ThroneDynamicProgramming()
{
}


ThroneDynamicProgramming::~ThroneDynamicProgramming()
{
}

unsigned int ThroneDynamicProgramming::solve()
{
	sort(turtles.begin(), turtles.end());
	const size_t N = turtles.size();

	// tablica z której zostanie zbudowany tron
	unique_ptr < unique_ptr < unsigned int[]>[] > table(new unique_ptr<unsigned int[]>[N]);
	for (unsigned int i = 0; i < N; ++i)
		table[i] = unique_ptr<unsigned int[]>(new unsigned int[i+3]);

	for (unsigned int i = 0; i < N; ++i)
	{
		table[i][0] = 0;
		for (unsigned int j = 1; j < i + 3; ++j)
		{
			table[i][j] = numeric_limits<unsigned int>::max();	// assigning max value to all columns of table(except first)
		}
	}

	table[0][1] = turtles[0].getWeight();
	for (unsigned int i = 1; i < N; ++i)
	{
		for (unsigned int j = 1; j <= i + 1; ++j)
		{
			table[i][j] = min(table[i][j], table[i - 1][j]);
			if (turtles[i].getCapacity() >= table[i - 1][j - 1])
			{
				table[i][j] = min(table[i][j], table[i - 1][j - 1] + turtles[i].getWeight());
			}
		}
	}

	// szukanie ostatniego indeksu(wysokoœæ tronu)
	for (unsigned int i = N; i >= 0; --i)
	{
		if (table[N - 1][i] != numeric_limits<unsigned int>::max())
		{
			return i;
		}
	}


	return 0;
}

double ThroneDynamicProgramming::getTn(const unsigned int problemSize) const
{
	// T(n) = n*log(n) + n*n + n*n + n
	double res1 = problemSize * log2(problemSize);
	double res2 = problemSize * problemSize;
	
	return res1 +  2.0 * res2;
}
