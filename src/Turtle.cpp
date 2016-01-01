// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#include "Turtle.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Turtle::Turtle()
{
	weight = rand();
	strength = weight + rand();
}

Turtle::Turtle(unsigned int w, unsigned int s)
{
	weight = w;
	strength = s;
}


Turtle::~Turtle()
{
}

unsigned int Turtle::getWeight() const
{
	return weight;
}

unsigned int Turtle::getStrength() const
{
	return strength;
}

unsigned int Turtle::getCapacity() const
{
	return strength - weight;
}

bool Turtle::operator<(const Turtle& t) const
{
	if (getWeight() == t.getWeight())
		return getStrength() < t.getStrength();
	return getWeight() < t.getWeight();
}

bool Turtle::operator>(const Turtle& t) const
{
	return !(*this < t);
}

bool Turtle::operator==(const Turtle& t) const
{
	return weight == t.getWeight() && strength == t.getStrength();
}

bool Turtle::operator!=(const Turtle& t) const
{
	return !(*this == t);
}

ostream& operator<<(ostream& out, const Turtle& t)
{
	out << "[" << t.getWeight() << ", " << t.getStrength() << "]";
	return out;
}
