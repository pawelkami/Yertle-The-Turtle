// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#include <iostream>
#include "Turtle.h"
#include "ThroneDynamicProgramming.h"
#include "ThroneFast.h"
#include "ThroneNaive.h"
#include <ctime>
#include "project_declarations.h"
#include "ResultsTable.h"
#include <memory>

using namespace std;

void info()
{
	cout << "Usage:\n\n"
		<< "If you want to generate data:\n"
		<< "yertle [-d/-n/-s] starting_size how_much_to_increase\n\n"
		<< "If you want to read from stdin:\n"
		<< "yertle [-d/-n/-s] < file_name\n\n"
		<< "Where:\n"
		<< "-d - dynamic programming\n"
		<< "-n - naive\n"
		<< "-f - fast\n"
		<< "starting_size - the smallest problem size that will be computed\n"
		<< "how_much_to_increase - how much problem size will be increased in every iteration\n";
}

int main(int argc, char** argv)
{
	unique_ptr<Throne> throne;
	{
		string option(argv[1]);

		if (option == "-d")
			throne = unique_ptr<ThroneDynamicProgramming>(new ThroneDynamicProgramming);
		else if (option == "-n")
			throne = unique_ptr<ThroneNaive>(new ThroneNaive);
		else if (option == "-f")
			throne = unique_ptr<ThroneFast>(new ThroneFast);
		else
		{
			info();
			return 1;
		}
	}

	if (argc == 4)
	{
		ResultsTable results( atoi(argv[3]), atoi(argv[2]) );
		cout << "Computing..." << endl;
		results.generateSolveAndPrintResults(*throne);
		throne->printTurtles();
	}
	else if (argc == 2)
	{
		ResultsTable results;
		throne->readData();
		cout << "Computing..." << endl;
		results.solveAndPrintResults(*throne);
	}
	else
		info();

	return 0;
}
