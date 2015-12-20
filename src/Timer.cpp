#include "Timer.h"

Timer::Timer()
{
	time_begin = clock();
	time_end = time_begin;
}


Timer& Timer::getInstance()
{
	static Timer instance = Timer();
	return instance;
}

void Timer::start()
{
	time_begin = clock();
}

void Timer::stop()
{
	time_end = clock();
}

time_t Timer::result()
{
	return ( double( time_end - time_begin ) / CLOCKS_PER_SEC ) * 1000;
}
