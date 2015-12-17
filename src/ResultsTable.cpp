#include "ResultsTable.h"
#include <iostream>
#include "Timer.h"


using namespace std;

ResultsTable::ResultsTable()
{
}

void ResultsTable::generateSolveAndPrintResults(Throne& throne)
{
	throne.clear();
	times.clear();
	for (int i = 100; i < MAX_TURTLES; i += 450)
	{
		throne.generateTurtles(i);
		Timer::getInstance().start();
		int height = throne.solve();
		Timer::getInstance().stop();

		times.push_back( std::make_tuple(i, Timer::getInstance().result(), height) );
	}

	cout << "n\t" << "t(n)[ms]\t" << "height" << endl;
	for (auto it = times.begin(); it != times.end(); ++it)
	{
		cout << get<0>(*it) << "\t" << get<1>(*it) << "\t\t" << get<2>(*it) << endl;
	}
}
