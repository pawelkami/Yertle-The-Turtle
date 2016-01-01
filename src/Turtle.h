// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>

class Turtle
{
private:
	/*!
	*  Weight of a Turtle.
	*/
	unsigned int weight;

	/*!
	*  Strength of a Turtle.
	*/
	unsigned int strength;

public:
	/*!
	*  Default constructor.
	*  Creates Turtle with random weight and strength(strength is bigger than weight).
	*/
	Turtle();

	/*!
	*  Creates Turtle with given attributes.
	*  @param weight Weight of a Turtle
	*  @param strength Strength of a Turtle
	*/
	Turtle(unsigned int weight, unsigned int strength);
	~Turtle();

	/*!
	*   @return Weight of a Turtle.
	*/
	unsigned int getWeight() const;

	/*!
	*   @return Strength of a Turtle.
	*/
	unsigned int getStrength() const;
	
	/*!
	*   @return Capacity of a Turtle(strength-weight).
	*/
	unsigned int getCapacity() const;


	bool operator<(const Turtle&) const;
	bool operator>(const Turtle&) const;
	bool operator==(const Turtle&) const;
	bool operator!=(const Turtle&) const;

	friend std::ostream& operator<<(std::ostream& out, const Turtle& t);

};

#endif // TURTLE_H
