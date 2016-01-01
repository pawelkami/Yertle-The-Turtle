// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef THRONE_NAIVE_H
#define THRONE_NAIVE_H

#include <vector>
#include "Turtle.h"
#include "project_declarations.h"
#include "Throne.h"
#include <list>

class ThroneNaive : public Throne
{
public:
	unsigned int solve();
	double getTn(const unsigned int problemSize) const;
};

#endif