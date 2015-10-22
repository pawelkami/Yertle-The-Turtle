#include <iostream>
#include "Turtle.h"
#include "Throne.h"

using namespace std;

int main(int argc, char** argv)
{
	Throne throne;

	throne.generateTurtles();
	cout << throne.solveDynamicProgramming() << endl;
	throne.printTurtles();
	cin.get();
	return 0;
}