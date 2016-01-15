// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>

/**
* Klasa ¿ó³wia.
*/
class Turtle
{
private:
	/*!
	*  Waga ¿ó³wia.
	*/
	unsigned int weight;

	/*!
	*  Si³a ¿ó³wia.
	*/
	unsigned int strength;

public:
	/*!
	*  Domyœlny konstruktor.
	*  Tworzy ¿ó³wia z losowymi wartoœciami(si³a jest wiêksza ni¿ waga).
	*/
	Turtle();

	/*!
	*  Tworzy ¿ó³wia z podanymi wartoœciami.
	*  @param weight Waga ¿ó³wia
	*  @param strength Si³a ¿ó³wia
	*/
	Turtle(unsigned int weight, unsigned int strength);
	~Turtle();

	/*!
	*   @return Zwraca wagê.
	*/
	unsigned int getWeight() const;

	/*!
	*   @return Zwraca si³ê.
	*/
	unsigned int getStrength() const;
	
	/*!
	*   @return Zwraca wytrzyma³oœæ(si³a - waga).
	*/
	unsigned int getCapacity() const;


	bool operator<(const Turtle&) const;
	bool operator>(const Turtle&) const;
	bool operator==(const Turtle&) const;
	bool operator!=(const Turtle&) const;

	friend std::ostream& operator<<(std::ostream& out, const Turtle& t);

};

#endif // TURTLE_H
