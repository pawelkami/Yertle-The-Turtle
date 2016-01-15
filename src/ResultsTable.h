// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef RESULT_TABLE_H
#define RESULT_TABLE_H

#include "Throne.h"
#include <vector>
#include "project_declarations.h"
#include <tuple>

/**
* Klasa rysuj¹ca tabelkê bêd¹c¹ wynikiem dzia³ania algorytmu.
*/
class ResultsTable
{
private:
	/**
	* Wektor przechowuj¹cy krotki z <rozmiarem problemu, czasem wykonania, wysokoœci¹ tronu>.
	*/
	std::vector< std::tuple<int, double, int> > times;

	/**
	* Pole klasy mówi¹ce o ile trzeba zwiêkszyæ rozmiar problemu w kolejnej iteracji algorytmu.
	*/
	unsigned int increasingProblem;
	
	/**
	* Pole klasy mówi¹ce od jakiego rozmiaru problemu nale¿y wywo³aæ algorytm.
	*/
	unsigned int startingFrom;

	/**
	* Mediana rozmiaru problemu. Potrzebna do wyliczenia q(n).
	*/
	int median;

public:
	/**
	* Domyœlny konstruktor.
	*/
	ResultsTable();

	/**
	* Konstruktor.
	* increasing - o ile problem ma byæ zwiêkszany
	* starting - od jakiego rozmiaru problemu rozpocz¹æ obliczenia
	*/
	ResultsTable(unsigned int increasing, unsigned int starting);
	
	/**
	* Metoda generuj¹ca ¿ó³wie, wywo³uj¹ca algorytm obliczaj¹cy wysokoœæ Tronu Yertle oraz rysuj¹ca tabelkê z wynikami.
	* t - obiekt dla którego przeprowadzamy obliczenia.
	*/
	void generateSolveAndPrintResults(Throne& t);

	/**
	* Metoda do rozwi¹zywania problemu przy wprowadzaniu ¿ó³wi przez stdin.
	*/
	void solveAndPrintResults(Throne& t);
};

#endif