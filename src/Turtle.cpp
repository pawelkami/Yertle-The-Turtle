#include "Turtle.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Turtle::Turtle()
{
	weight = rand();
	strength = weight + rand();
}

Turtle::Turtle(unsigned long long w, unsigned long long s)
{
	weight = w;
	strength = s;
}


Turtle::~Turtle()
{
}

unsigned long long Turtle::getWeight() const
{
	return weight;
}

unsigned long long Turtle::getStrength() const
{
	return strength;
}

unsigned long long Turtle::getCapacity() const
{
	return strength - weight;
}

bool Turtle::operator<(const Turtle& t) const
{
	return getCapacity() < t.getCapacity();
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
