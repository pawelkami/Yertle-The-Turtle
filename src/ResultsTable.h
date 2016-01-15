// Autor: Pawe� Kami�ski
// Problem: Tron Yertle

#ifndef RESULT_TABLE_H
#define RESULT_TABLE_H

#include "Throne.h"
#include <vector>
#include "project_declarations.h"
#include <tuple>

/**
* Klasa rysuj�ca tabelk� b�d�c� wynikiem dzia�ania algorytmu.
*/
class ResultsTable
{
private:
	/**
	* Wektor przechowuj�cy krotki z <rozmiarem problemu, czasem wykonania, wysoko�ci� tronu>.
	*/
	std::vector< std::tuple<int, double, int> > times;

	/**
	* Pole klasy m�wi�ce o ile trzeba zwi�kszy� rozmiar problemu w kolejnej iteracji algorytmu.
	*/
	unsigned int increasingProblem;
	
	/**
	* Pole klasy m�wi�ce od jakiego rozmiaru problemu nale�y wywo�a� algorytm.
	*/
	unsigned int startingFrom;

	/**
	* Mediana rozmiaru problemu. Potrzebna do wyliczenia q(n).
	*/
	int median;

public:
	/**
	* Domy�lny konstruktor.
	*/
	ResultsTable();

	/**
	* Konstruktor.
	* increasing - o ile problem ma by� zwi�kszany
	* starting - od jakiego rozmiaru problemu rozpocz�� obliczenia
	*/
	ResultsTable(unsigned int increasing, unsigned int starting);
	
	/**
	* Metoda generuj�ca ��wie, wywo�uj�ca algorytm obliczaj�cy wysoko�� Tronu Yertle oraz rysuj�ca tabelk� z wynikami.
	* t - obiekt dla kt�rego przeprowadzamy obliczenia.
	*/
	void generateSolveAndPrintResults(Throne& t);

	/**
	* Metoda do rozwi�zywania problemu przy wprowadzaniu ��wi przez stdin.
	*/
	void solveAndPrintResults(Throne& t);
};

#endif