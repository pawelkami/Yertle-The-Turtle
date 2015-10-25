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

};

#endif // THRONEDYNAMICPROGRAMMING_H

