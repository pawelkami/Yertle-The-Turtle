// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef RESULT_TABLE_H
#define RESULT_TABLE_H

#include "Throne.h"
#include <vector>
#include "project_declarations.h"
#include <tuple>

class ResultsTable
{
private:
	std::vector< std::tuple<int, time_t, int> > times;
	unsigned int increasingProblem;	// how much to increase problem
	unsigned int startingFrom;	// size of starting problem
	int median;

public:
	ResultsTable();
	ResultsTable(unsigned int increasing, unsigned int starting);
	void generateSolveAndPrintResults(Throne&);
	void solveAndPrintResults(Throne&);
};

#endif