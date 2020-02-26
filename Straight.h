#ifndef STRAIGHT_H
#define STRAIGHT_H

using namespace std;

#include "minisector.h"
#include <string>
#include <iostream>

class Straight : public Minisector{
protected:

public:
	Straight(string aName, int aTime, int aConsumption, int aSector);

	void SetTimeConsump(int aSetup);

	~Straight();
};

#endif