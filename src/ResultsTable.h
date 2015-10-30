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

public:
	ResultsTable();
	void generateSolveAndPrintResults(Throne&);
};

#endif