// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#include "Throne.h"
#include <algorithm>
#include "project_declarations.h"
#include <iostream>
#include <random>
#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Throne::addTurtle()
{
	turtles.push_back(Turtle());
}

void Throne::addTurtle(unsigned int weight, unsigned int strength)
{
	turtles.push_back(Turtle(weight, strength));
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


void Throne::clear()
{
	turtles.clear();
}

void Throne::readData()
{
	cout << "Podaj wartosci kolejnych zolwi w formacie:\n"
		<< "waga wytrzymalosc\n"
		<< "Przyklad:\n"
		<< "2 5\n"
		<< "Aby zakonczyc wpisywanie wcisnij jakikolwiek klawisz z litera i zatwierdz enterem" << endl;

	while (!cin.eof())
	{
		string::iterator it;
		string weight, strength, tmp;

		getline(cin, tmp);

		// sprawdzanie czy w ciagu znajduje sie litera - jesli tak to konczymy pobierac
		for (auto c : tmp)
		{
			if (isalpha(c))
				return;
		}

		if (tmp.empty())
			continue;

		it = tmp.begin();

		while (*it != ' ')
		{
			weight.push_back(*it++);
		}

		++it;
		
		while (it != tmp.end() && *it != ' ')
		{
			strength.push_back(*it++);
		}

		Turtle turtle( atoi(weight.c_str() ), atoi( strength.c_str() ) );
		turtles.push_back(turtle);
	}
}

unsigned int Throne::getSize() const
{
	return turtles.size();
}

