using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "minisector.h"

Minisector::Minisector() {
	Time = 0; 			//store the time of the each section
	Consumption = 0; 	//store the tyre consumption as well
	Name = "NO NAME"; 	//corner tend to have some name

	Sector = 0; 		//store which sector it locates
}

int Minisector::get_choice(int num) {
	bool state = false;
	int answer;
	
	while (state != true) {
		cout << "Input: ";
		cin >> answer;
		if (answer > 0 && answer < num+1) {
			state = true;
		}
	}
	return answer;
}

void Minisector::SetTimeConsump() {	
}

double Minisector::get_Time() {
	return Time;
}

int Minisector::get_Consumption() {
	return Consumption;
}

string Minisector::get_Name() {
	return Name;
}

int Minisector::get_Sector() {
	return Sector;
}

Minisector::~Minisector() {
}