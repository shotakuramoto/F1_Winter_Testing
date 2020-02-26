using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include "F1Car.h"
#include "Circuit.h"
#include "minisector.h"
#include "Straight.h"
#include "Corner.h"

Circuit::Circuit() {
	Lap = 0;
	S1 = 0;
	S2 = 0;
	S3 = 0;
	Totaltime = 0;
}

Circuit::Circuit(int aNum) {
	Lap = aNum;
}

void Circuit::set_Lap(int aLap) {
	Lap = aLap;
}

void Circuit::set_S1(double aS1) {
	S1 = S1 + aS1;
}

void Circuit::set_S2(double aS2) {
	S2 = S2 + aS2;
}

void Circuit::set_S3(double aS3) {
	S3 = S3 + aS3;
}

void Circuit::set_Totaltime(bool check) {
	if (check == false) {
		Totaltime = 0;
	} else {
		Totaltime = S1 + S2 + S3;
	}
}

int Circuit::get_Lap() {
	return Lap;
}

double Circuit::get_S1() {
	return S1;
}

double Circuit::get_S2() {
	return S2;
}

double Circuit::get_S3() {
	return S3;
}
double Circuit::get_Totaltime() {
	return Totaltime;
}

Circuit::~Circuit() {
}