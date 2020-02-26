#ifndef CORNERS_H
#define CORNERS_H

using namespace std;

#include <string>
#include <iostream>
#include "minisector.h"

class Corner:public Minisector{
protected:
	int SpeedCorner; //this decides the time
public:
	Corner(string aName, int aSpeedCorner, int aTime, int aSector, int aConsumption);

	void SetTimeConsump(int choice, int aSetup);
	int get_Speed();

	~Corner();
};

#endif