#include "Throne.h"
#include "Turtle.h"
#include <cstdlib>
#include <algorithm>
#include <array>
#include <memory>

using namespace std;


Throne::Throne()
{
}


Throne::~Throne()
{
}

void Throne::addTurtle()
{
	turtles.push_back(Turtle());
}

void Throne::addTurtle(unsigned long long weight, unsigned long long strength)
{
	turtles.push_back(Turtle(weight, strength));
	sort(turtles.begin(), turtles.end());
}

void Throne::generateTurtles()
{
	int max = rand() % MAX_TURTLES + 1;
	for (int i = 0; i < max; ++i)
		addTurtle();

	sort(turtles.begin(), turtles.end());
}

void Throne::generateTurtles(unsigned int count)
{
	count = (count > MAX_TURTLES ? MAX_TURTLES : count);

	for (unsigned int i = 0; i < count; ++i)
		addTurtle();

	sort(turtles.begin(), turtles.end());
}

int Throne::solveDynamicProgramming()
{
	const size_t N = turtles.size();

	// table in which Throne will be builded
	unique_ptr < unique_ptr < unsigned long long[]>[] > table(new unique_ptr<unsigned long long[]>[N]);
	for (unsigned int i = 0; i < N; ++i)
		table[i] = unique_ptr<unsigned long long[]>(new unsigned long long[N + 1]);

	for (unsigned int i = 0; i < N; ++i)
		for (unsigned int j = 0; j < N + 1; ++j)
			table[i][j] = (j == 0 ? 0 : numeric_limits<unsigned long long>::max());	// assigning max value to all columns of table(except first)

	table[0][1] = turtles[0].getWeight();
	for (unsigned int i = 1; i < N; ++i)
	{
		for (unsigned int j = 1; j <= i + 1; ++j)
		{
			table[i][j] = min(table[i][j], table[i - 1][j]);
			if (turtles[i].getCapacity() > table[i - 1][j - 1])
			{
				table[i][j] = min(table[i][j], table[i - 1][j - 1] + turtles[i].getWeight());
			}
		}
	}
	
	//for (unsigned int i = 0; i < N; ++i)
	//{
	//	for (int j = 0; j < 15; ++j)
	//		cout << ((table[i][j] == numeric_limits<unsigned long long>::max()) ? 0 : table[i][j]) << "\t";
	//	cout << endl;
	//}

	// looking for index of last element in last row(height of Throne)
	for (unsigned int i = N; i >= 0; --i)
	{
		if (table[N - 1][i] != numeric_limits<unsigned long long>::max())
			return i;
	}


	return 0;
}

void Throne::printTurtles() const
{
	for (auto& t : turtles)
		cout << t << endl;
}