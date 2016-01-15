// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef TIMER_H
#define TIMER_H

#include <ctime>
#include <chrono>

/**
* Klasa timera zrealizowana jako singleton.
*/
class Timer
{
private:
	typedef std::chrono::high_resolution_clock clock_;

	/**
	* Czas pocz¹tku.
	*/
	std::chrono::time_point<clock_> time_begin;


	/**
	* Czas, w którym zatrzyma³ siê timer.
	*/
	std::chrono::time_point<clock_> time_end;

	typedef std::chrono::duration<double, std::ratio<1> > second_;

	/**
	* Konstruktor 
	*/
	Timer();

	Timer(const Timer&);
	Timer& operator=(const Timer&);

public:
	/**
	* Singleton, metoda getInstance().
	*/
	static Timer& getInstance();

	/**
	* Metoda rozpoczynaj¹ca pomiar.
	*/
	void start();

	/**
	* Metoda zatrzymuj¹ca pomiar.
	*/
	void stop();

	/**
	* Metoda zwracaj¹ca wynik.
	*/
	double result();
};

#endif