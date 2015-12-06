#ifndef THRONE_FAST_H
#define THRONE_FAST_H


#include <vector>
#include "Turtle.h"
#include "project_declarations.h"
#include "Throne.h"

class ThroneFast : public Throne
{
private:
	unsigned int findThrone();
public:
	unsigned int solve();
};

#endif