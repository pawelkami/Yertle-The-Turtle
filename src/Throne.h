// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef THRONE_H
#define THRONE_H

#include <vector>
#include "Turtle.h" 


/**
* Klasa abstrakcyjna zawieraj¹ca zbiór ¿ó³wi oraz metodê ustawiania z nich Tronu Króla Yertle.
*/
class Throne
{
protected:
	/**
	 * Wektor przechowuj¹cy ¿ó³wie.
	 */
	std::vector<Turtle> turtles;

	/**
	* Metoda dodaj¹ca losowego ¿ó³wia do zbioru.
	*/
	virtual void addTurtle();
public:
	/*
	* Metoda dodaj¹ca ¿ó³wia o zadanej wadze i wytrzyma³oœci.
	*/
	virtual void addTurtle(unsigned int weight, unsigned int strength);

	/*
	* Metoda generuj¹ca dan¹ liczbê ¿ó³wi korzystaj¹c z generatora liczb pseudolosowych rozk³adu jednostajnego.
	*/
	virtual void generateTurtles(unsigned int count);

	/**
	* Metoda czyszcz¹ca zbiór ¿ó³wi.
	*/
	virtual void clear();

	/**
	* Metoda wczytuj¹ca ¿ó³wie z stdin.
	*/
	virtual void readData();

	/**
	* Metoda zwracaj¹ca iloœæ ¿ó³wi w zbiorze.
	*/
	virtual unsigned int getSize() const;

	/**
	* Metoda zwracaj¹ca rozmiar problemu.
	*/
	virtual double getTn(const unsigned int problemSize) const = 0;
	
	/**
	* Metoda wywo³uj¹ca algorytm uk³adaj¹cy ¿ó³wie na tronie.
	*/
	virtual unsigned int solve() = 0;
};

#endif
