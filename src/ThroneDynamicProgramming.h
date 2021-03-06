// Autor: Pawe� Kami�ski
// Problem: Tron Yertle

#ifndef THRONEDYNAMICPROGRAMMING_H
#define THRONEDYNAMICPROGRAMMING_H

#include "Turtle.h"
#include <vector>
#include "project_declarations.h"
#include "Throne.h"

/**
* Klasa s�u��ca do przeprowadzenia oblicze� za pomoc� algorytmu programowania dynamicznego.
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

