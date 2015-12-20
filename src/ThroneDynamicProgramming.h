#ifndef THRONEDYNAMICPROGRAMMING_H
#define THRONEDYNAMICPROGRAMMING_H

#include "Turtle.h"
#include <vector>
#include "project_declarations.h"
#include "Throne.h"

class ThroneDynamicProgramming : public Throne
{
public:
	ThroneDynamicProgramming();
	~ThroneDynamicProgramming();

	unsigned int solve();
	double getTn(const unsigned int problemSize) const;

};

#endif // THRONEDYNAMICPROGRAMMING_H

