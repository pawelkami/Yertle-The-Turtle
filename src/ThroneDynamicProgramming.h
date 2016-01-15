// Autor: Pawe³ Kamiñski
// Problem: Tron Yertle

#ifndef THRONEDYNAMICPROGRAMMING_H
#define THRONEDYNAMICPROGRAMMING_H

#include "Turtle.h"
#include <vector>
#include "project_declarations.h"
#include "Throne.h"

/**
* Klasa s³u¿¹ca do przeprowadzenia obliczeñ za pomoc¹ algorytmu programowania dynamicznego.
*/
class ThroneDynamicProgramming : public Throne
{
public:
	ThroneDynamicProgramming();
	~ThroneDynamicProgramming();

	unsigned int solve();
	double getTn(const unsigned int problemSize) const;

};

#endif // THRONEDYNAMICPROGRAMMING_H

