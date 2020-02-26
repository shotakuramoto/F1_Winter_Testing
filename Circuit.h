#ifndef Circuit_H
#define Circuit_H

using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include "F1Car.h"

class Circuit {
protected:
	int Lap;

	double S1;
	double S2;
	double S3;
	double Totaltime;
 
public:
	Circuit();
	Circuit(int aNum);

	void set_Lap(int aLap);
	void set_S1(double aS1);
	void set_S2(double aS2);
	void set_S3(double aS3);
	void set_Totaltime(bool check);

	int get_Lap();
	double get_S1();
	double get_S2();
	double get_S3();
	double get_Totaltime();

	~Circuit();
};

#endif