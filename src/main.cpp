#include <iostream>
#include "Turtle.h"
#include "ThroneDynamicProgramming.h"
#include "ThroneGreedy.h"
#include <ctime>
#include "project_declarations.h"
#include "ResultsTable.h"

using namespace std;

int main(int argc, char** argv)
{
	//ThroneDynamicProgramming throne;
	ThroneGreedy throne;
	//throne.generateTurtles(1300);

	ResultsTable results;

	results.generateSolveAndPrintResults(throne);
	//odpowiedz 3
	//throne.addTurtle(300, 1000);
	//throne.addTurtle(200, 600);
	//throne.addTurtle(1000, 1200);
	//throne.addTurtle(100, 101);

	// odpowiedz 5
	//throne.addTurtle(5, 15);
	//throne.addTurtle(3, 6);
	//throne.addTurtle(4, 10);
	//throne.addTurtle(1, 1);
	//throne.addTurtle(2, 3);


	//odpowiedz 7
	//throne.addTurtle(4, 19);
	//throne.addTurtle(3, 9);
	//throne.addTurtle(7, 20);
	//throne.addTurtle(2, 3);
	//throne.addTurtle(3, 6);
	//throne.addTurtle(20, 40);
	//throne.addTurtle(1, 1);

	//cout << throne.solve() << endl;
	//throne.printTurtles();
	cin.get();
	return 0;

}
