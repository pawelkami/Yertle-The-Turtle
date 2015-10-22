#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>

class Turtle
{
private:
	/*!
	*  Weight of a Turtle.
	*/
	unsigned long long weight;

	/*!
	*  Strength of a Turtle.
	*/
	unsigned long long strength;

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
	Turtle(unsigned long long weight, unsigned long long strength);
	~Turtle();

	/*!
	*   @return Weight of a Turtle.
	*/
	inline unsigned long long getWeight() const;

	/*!
	*   @return Strength of a Turtle.
	*/
	inline unsigned long long getStrength() const;
	
	/*!
	*   @return Capacity of a Turtle(strength-weight).
	*/
	unsigned long long getCapacity() const;


	bool operator<(const Turtle&) const;
	bool operator>(const Turtle&) const;
	bool operator==(const Turtle&) const;
	bool operator!=(const Turtle&) const;

	friend std::ostream& operator<<(std::ostream& out, const Turtle& t);

};

#endif // TURTLE_H