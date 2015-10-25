#include <vector>
#include "Turtle.h"
#include "project_declarations.h"
#include "Throne.h"

class ThroneGreedy : public Throne
{
private:
	unsigned int findThroneFromIterator(std::vector<Turtle>::iterator it);
public:
	unsigned int solve();
};