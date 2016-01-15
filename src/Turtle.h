// Autor: Pawe� Kami�ski
// Problem: Tron Yertle

#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>

/**
* Klasa ��wia.
*/
class Turtle
{
private:
	/*!
	*  Waga ��wia.
	*/
	unsigned int weight;

	/*!
	*  Si�a ��wia.
	*/
	unsigned int strength;

public:
	/*!
	*  Domy�lny konstruktor.
	*  Tworzy ��wia z losowymi warto�ciami(si�a jest wi�ksza ni� waga).
	*/
	Turtle();

	/*!
	*  Tworzy ��wia z podanymi warto�ciami.
	*  @param weight Waga ��wia
	*  @param strength Si�a ��wia
	*/
	Turtle(unsigned int weight, unsigned int strength);
	~Turtle();

	/*!
	*   @return Zwraca wag�.
	*/
	unsigned int getWeight() const;

	/*!
	*   @return Zwraca si��.
	*/
	unsigned int getStrength() const;
	
	/*!
	*   @return Zwraca wytrzyma�o��(si�a - waga).
	*/
	unsigned int getCapacity() const;


	bool operator<(const Turtle&) const;
	bool operator>(const Turtle&) const;
	bool operator==(const Turtle&) const;
	bool operator!=(const Turtle&) const;

	friend std::ostream& operator<<(std::ostream& out, const Turtle& t);

};

#endif // TURTLE_H
