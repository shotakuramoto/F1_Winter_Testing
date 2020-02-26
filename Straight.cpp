#include "Straight.h"
#include "minisector.h"
#include <iostream>
#include <string>

using namespace std;

Straight::Straight(string aName, int aTime, int aConsumption, int aSector) {
	Name = aName;
	Time = aTime;
	Consumption = aConsumption;
	Sector = aSector;
}

void Straight::SetTimeConsump(int aSetup) {
	cout << "1. FOCUS ON TYRE" << endl;
	cout << "2. FOCUS ON PACE" << endl;
	int choice = get_choice(2);

	switch (aSetup) {
		case 1:
			//option 1
			if (choice == 1) {
				cout << "SAVE TIRE" << endl;
				Time = Time + 1.2;
				Consumption = Consumption - 4;
				//option 2
			} else if (choice == 2) {
				cout << "FAST SPEED" << endl;
				Time = Time - 0.1;
				Consumption = Consumption + 4;
			}
			break;

		case 2:
			//option 1
			if (choice == 1) {
				cout << "SAVE TIRE" << endl;
				Time = Time + 1.0;
				Consumption = Consumption - 4;
				//option 2
			} else if (choice == 2) {
				cout << "FAST SPEED" << endl;
				Time = Time - 0.5;
				Consumption = Consumption + 4;
			}
			break;

		case 3:
			//option 1
			if (choice == 1) {
				cout << "SAVE TIRE" << endl;
				Time = Time + 0.9;
				Consumption = Consumption - 4;
				//option 2
			} else if (choice == 2) {
				cout << "FAST SPEED" << endl;
				Time = Time - 0.9;
				Consumption = Consumption + 4;
			}
			break;

		case 4:
			//option 1
			if (choice == 1) {
				cout << "SAVE TIRE" << endl;
				Time = Time + 0.5;
				Consumption = Consumption - 4;
				//option 2
			} else if (choice == 2) {
				cout << "FAST SPEED" << endl;
				Time = Time - 1.3;
				Consumption = Consumption + 4;
			}
			break;
			
		case 5:	
			//option 1
			if (choice == 1) {
				cout << "SAVE TIRE" << endl;
				Time = Time + 0.1;
				Consumption = Consumption - 4;
				//option 2
			} else if (choice == 2) {
				cout << "FAST SPEED" << endl;
				Time = Time - 1.7;
				Consumption = Consumption + 4;
			}
			break;
		}
	cout << endl;
}

Straight::~Straight(){
}