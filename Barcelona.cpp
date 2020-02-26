#include <iostream>
#include <string>
#include <vector>
#include "Circuit.h"
#include "minisector.h"
#include "Corner.h"
#include "Straight.h"
#include "Barcelona.h"

using namespace std;

Barcelona::Barcelona() {
	NameCircuit = "Circuit de Barcelona-Catalunya";

	//Corner(string aName, int aSpeedCorner, int aTime, int aSector, int aConsumption)
	ListCorner.push_back(Corner("Turn 1", 2, 3, 1, 3));
	ListCorner.push_back(Corner("Turn 2", 2, 2, 1, 3));
	ListCorner.push_back(Corner("Turn 3", 3, 8, 1, 7));
	ListCorner.push_back(Corner("Turn 4", 2, 6, 2, 5));
	ListCorner.push_back(Corner("Turn 5", 1, 7, 2, 6));
	ListCorner.push_back(Corner("Turn 6", 1, 5, 2, 6));
	ListCorner.push_back(Corner("Turn 7", 2, 3, 2, 7));
	ListCorner.push_back(Corner("Turn 8", 2, 8, 2, 8));
	ListCorner.push_back(Corner("Turn 9", 3, 7, 2, 4));
	ListCorner.push_back(Corner("Turn 10", 1, 10, 3, 4));
	ListCorner.push_back(Corner("Turn 11", 2, 5, 3, 3));
	ListCorner.push_back(Corner("Turn 12", 1, 5, 3, 8));
	ListCorner.push_back(Corner("Turn 13", 1, 6, 3, 9));
	ListCorner.push_back(Corner("Turn 14", 1, 5, 3, 8));
	ListCorner.push_back(Corner("Turn 15", 1, 3, 3, 9));
	ListCorner.push_back(Corner("Turn 16", 3, 5, 3, 6));

	//int aLength, int aTime, int aConsumption, int aSector
	ListStraight.push_back(Straight("Home Straight", 10, 5, 1));
	ListStraight.push_back(Straight("Back Straight", 10, 8, 2));
}

string Barcelona::get_NameCircuit() {
	return NameCircuit;
}

vector<Corner> Barcelona::get_ListCorner() {
	return ListCorner;
}

vector<Straight> Barcelona::get_ListStraight() {
	return ListStraight;
}

Barcelona::~Barcelona() {
}