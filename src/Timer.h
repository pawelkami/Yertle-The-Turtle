#ifndef TIMER_H
#define TIMER_H

#include <ctime>

class Timer
{
private:
	time_t time_begin;
	time_t time_end;

	Timer();
	Timer(const Timer&);
	Timer& operator=(const Timer&);

public:
	static Timer& getInstance();
	void start();
	void stop();

	time_t result();
};

#endif