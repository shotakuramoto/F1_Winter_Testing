#ifndef BARCELONA_H
#define BARCELONA_H

#include <iostream>
#include <string>
#include <vector>
#include "Circuit.h"
#include "minisector.h"
#include "Corner.h"
#include "Straight.h"

using namespace std;

class Barcelona {
private:
	string NameCircuit;
	vector<Corner> ListCorner;
	vector<Straight> ListStraight;
public:
	Barcelona();

	string get_NameCircuit();
	vector<Corner> get_ListCorner();
	vector<Straight> get_ListStraight();

	~Barcelona();
};

#endif