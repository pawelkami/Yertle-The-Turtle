// Autor: Pawe� Kami�ski
// Problem: Tron Yertle

#ifndef THRONE_H
#define THRONE_H

#include <vector>
#include "Turtle.h" 


/**
* Klasa abstrakcyjna zawieraj�ca zbi�r ��wi oraz metod� ustawiania z nich Tronu Kr�la Yertle.
*/
class Throne
{
protected:
	/**
	 * Wektor przechowuj�cy ��wie.
	 */
	std::vector<Turtle> turtles;

	/**
	* Metoda dodaj�ca losowego ��wia do zbioru.
	*/
	virtual void addTurtle();
public:
	/*
	* Metoda dodaj�ca ��wia o zadanej wadze i wytrzyma�o�ci.
	*/
	virtual void addTurtle(unsigned int weight, unsigned int strength);

	/*
	* Metoda generuj�ca dan� liczb� ��wi korzystaj�c z generatora liczb pseudolosowych rozk�adu jednostajnego.
	*/
	virtual void generateTurtles(unsigned int count);

	/**
	* Metoda czyszcz�ca zbi�r ��wi.
	*/
	virtual void clear();

	/**
	* Metoda wczytuj�ca ��wie z stdin.
	*/
	virtual void readData();

	/**
	* Metoda zwracaj�ca ilo�� ��wi w zbiorze.
	*/
	virtual unsigned int getSize() const;

	/**
	* Metoda zwracaj�ca rozmiar problemu.
	*/
	virtual double getTn(const unsigned int problemSize) const = 0;
	
	/**
	* Metoda wywo�uj�ca algorytm uk�adaj�cy ��wie na tronie.
	*/
	virtual unsigned int solve() = 0;
};

#endif
