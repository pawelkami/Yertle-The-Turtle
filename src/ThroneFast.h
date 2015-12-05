#ifndef THRONE_FAST_H
#define THRONE_FAST_H


#include <vector>
#include "Turtle.h"
#include "project_declarations.h"
#include "Throne.h"

class ThroneFast : public Throne
{
private:
	unsigned int findThroneFromIterator(std::vector<Turtle>::iterator it);
public:
	unsigned int solve();
};

#endif