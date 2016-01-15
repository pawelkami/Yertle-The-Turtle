// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#include "Timer.h"

Timer::Timer()
{
	time_begin = clock_::now();
	time_end = clock_::now();
}


Timer& Timer::getInstance()
{
	static Timer instance = Timer();
	return instance;
}

void Timer::start()
{
	time_begin = clock_::now();
}

void Timer::stop()
{
	time_end = clock_::now();
}

double Timer::result()
{
	return std::chrono::duration_cast<second_>(time_end - time_begin).count() * 1000;
}
