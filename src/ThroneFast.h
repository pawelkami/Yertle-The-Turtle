// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef THRONE_FAST_H
#define THRONE_FAST_H


#include <vector>
#include "Turtle.h"
#include "project_declarations.h"
#include "Throne.h"

/**
* Klasa rozwi¹zuj¹ca problem z u¿yciem presortowania.
*/
class ThroneFast : public Throne
{
private:
	unsigned int findThrone();
public:
	unsigned int solve();
	double getTn(const unsigned int problemSize) const;
};

#endif