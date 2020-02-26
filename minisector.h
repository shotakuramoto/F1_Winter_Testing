#ifndef MINISECTOR_H
#define MINISECTOR_H

using namespace std;
#include <iostream>
#include <string>
#include <vector>

class Minisector {
protected:
	double Time; 		//store the time of the each section
	int Consumption; 	//store the tyre consumption as well
	string Name; 		//corner tend to have some name

	int Sector; 		//store which sector it locates

public:
	Minisector();

	virtual void SetTimeConsump();
	int get_choice(int num);
	double get_Time();
	int get_Consumption();
	string get_Name();
	int get_Sector();

	~Minisector();	
};

#endif