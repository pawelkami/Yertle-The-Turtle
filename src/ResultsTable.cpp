#include "ResultsTable.h"
#include <iostream>
#include "Timer.h"
#include <iomanip>


using namespace std;

ResultsTable::ResultsTable(unsigned int increasing, unsigned int starting) : increasingProblem(increasing), startingFrom(starting)
{
	unsigned int actual = starting, i = 0;
	// counting how many iterations
	for (; actual <= MAX_TURTLES; actual += increasing)
		++i;
	
	median = i & 1 ? starting + (i >> 1)*increasing : starting + ((i>>1)-1)*increasing/*( (starting << 1) + (i - 1) * increasing ) >> 1*/;
}

void ResultsTable::generateSolveAndPrintResults(Throne& throne)
{
	throne.clear();
	times.clear();
	int medianTime = 0;
	for (int i = startingFrom; i <= MAX_TURTLES; i += increasingProblem)
	{
		throne.generateTurtles(i);
		Timer::getInstance().start();
		int height = throne.solve();
		Timer::getInstance().stop();

		times.push_back( std::make_tuple(i, Timer::getInstance().result(), height) );
		if (i == median)
			medianTime = Timer::getInstance().result();

	}

	cout << "n\t" << "t(n)[ms]\t" << "q(n)\t\t\t" << "height" << endl;
	for (auto it = times.begin(); it != times.end(); ++it)
	{
		// q = ( t(n) * T(n_median) ) / ( t(n_median) * T(n) )
		double q = ( (get<1>(*it) == 0 ? 0.1 : get<1>(*it) ) * throne.getTn(median) ) / ( (medianTime == 0 ? 0.1 : medianTime) * throne.getTn(get<0>(*it) ) );
		cout << setprecision(4) << get<0>(*it) << "\t" << get<1>(*it) << "\t\t" << q << "\t\t\t" << get<2>(*it) << endl;
	}
}
