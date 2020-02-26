//#include "Circuit.h"
#include "Corner.h"
#include "minisector.h"
#include <iostream>
#include <string>

using namespace std;

Corner::Corner(string aName, int aSpeedCorner, int aTime, int aSector, int aConsumption) {
	Name = aName;
	SpeedCorner = aSpeedCorner;
	Time = aTime;
	Sector = aSector;
	Consumption = aConsumption;
}

void Corner::SetTimeConsump(int speed, int aSetup){ //it gains input from the user
	int choice;
	cout << "1. FOCUS ON POSITION" << endl;
	cout << "2. FOCUS ON ACCELERATION" << endl;
	cout << "3. FOCUS ON TYRE" << endl;
	choice = get_choice(3);

	switch (aSetup) {
		case 1:
			if (speed == 1) {
				//low speed corner
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Fine cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.9;
					Consumption = Consumption + 2;
					cout << "Bad breaking, Huge Lock up" << endl;
				} else if (choice == 3) {
					Time = Time - 0.4;
					Consumption = Consumption - 3;
					cout << "Great breaking, Nice Accelaration" << endl;
				}

			//mid speed corner
			} else if (speed == 2) {
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Great cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.3;
					Consumption = Consumption + 1;
					cout << "Accelerating too Early.... :(" << endl;
				} else if (choice == 3) {
					Time = Time ;
					Consumption = Consumption;
					cout << "Green Minisector" << endl;
				}
			//high speed corner
			} else if (speed == 3) {
				if (choice == 1) {
					Time = Time + 0.1;
					Consumption = Consumption;
					cout << "Fine Speed" << endl;
				} else if (choice == 2) {
					Time = Time - 0.1;
					Consumption = Consumption - 1;
					cout << "Perfect ACCELERATION" << endl;
				} else if (choice == 3) {
					Time = Time + 0.6;
					Consumption = Consumption + 6;
					cout << "Too slow,,,,," << endl;
				}
			}
			break;
		
		case 2:
			if (speed == 1) {
				//low speed corner
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Fine cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.9;
					Consumption = Consumption + 2;
					cout << "Bad breaking, Huge Lock up" << endl;
				} else if (choice == 3) {
					Time = Time - 0.4;
					Consumption = Consumption - 3;
					cout << "Great breaking, Nice Accelaration" << endl;
				}

			//mid speed corner
			} else if (speed == 2) {
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Great cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.3;
					Consumption = Consumption + 1;
					cout << "Accelerating too Early.... :(" << endl;
				} else if (choice == 3) {
					Time = Time ;
					Consumption = Consumption;
					cout << "Green Minisector" << endl;
				}
			//high speed corner
			} else if (speed == 3) {
				if (choice == 1) {
					Time = Time + 0.1;
					Consumption = Consumption;
					cout << "Fine Speed" << endl;
				} else if (choice == 2) {
					Time = Time - 0.1;
					Consumption = Consumption - 1;
					cout << "Perfect ACCELERATION" << endl;
				} else if (choice == 3) {
					Time = Time + 0.6;
					Consumption = Consumption + 6;
					cout << "Too slow,,,,," << endl;
				}
			}
		break;

		case 3:
			if (speed == 1) {
				//low speed corner
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Fine cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.9;
					Consumption = Consumption + 2;
					cout << "Bad breaking, Huge Lock up" << endl;
				} else if (choice == 3) {
					Time = Time - 0.4;
					Consumption = Consumption - 3;
					cout << "Great breaking, Nice Accelaration" << endl;
				}

			//mid speed corner
			} else if (speed == 2) {
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Great cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.3;
					Consumption = Consumption + 1;
					cout << "Accelerating too Early.... :(" << endl;
				} else if (choice == 3) {
					Time = Time ;
					Consumption = Consumption;
					cout << "Green Minisector" << endl;
				}
			//high speed corner
			} else if (speed == 3) {
				if (choice == 1) {
					Time = Time + 0.1;
					Consumption = Consumption;
					cout << "Fine Speed" << endl;
				} else if (choice == 2) {
					Time = Time - 0.1;
					Consumption = Consumption - 1;
					cout << "Perfect ACCELERATION" << endl;
				} else if (choice == 3) {
					Time = Time + 0.6;
					Consumption = Consumption + 6;
					cout << "Too slow,,,,," << endl;
				}
			}
		break;

		case 4:
			if (speed == 1) {
				//low speed corner
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Fine cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.9;
					Consumption = Consumption + 2;
					cout << "Bad breaking, Huge Lock up" << endl;
				} else if (choice == 3) {
					Time = Time - 0.4;
					Consumption = Consumption - 3;
					cout << "Great breaking, Nice Accelaration" << endl;
				}

			//mid speed corner
			} else if (speed == 2) {
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Great cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.3;
					Consumption = Consumption + 1;
					cout << "Accelerating too Early.... :(" << endl;
				} else if (choice == 3) {
					Time = Time ;
					Consumption = Consumption;
					cout << "Green Minisector" << endl;
				}
			//high speed corner
			} else if (speed == 3) {
				if (choice == 1) {
					Time = Time + 0.1;
					Consumption = Consumption;
					cout << "Fine Speed" << endl;
				} else if (choice == 2) {
					Time = Time - 0.1;
					Consumption = Consumption - 1;
					cout << "Perfect ACCELERATION" << endl;
				} else if (choice == 3) {
					Time = Time + 0.6;
					Consumption = Consumption + 6;
					cout << "Too slow,,,,," << endl;
				}
			}
		break;
		
		case 5:
			if (speed == 1) {
				//low speed corner
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Fine cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.9;
					Consumption = Consumption + 2;
					cout << "Bad breaking, Huge Lock up" << endl;
				} else if (choice == 3) {
					Time = Time - 0.4;
					Consumption = Consumption - 3;
					cout << "Great breaking, Nice Accelaration" << endl;
				}

			//mid speed corner
			} else if (speed == 2) {
				if (choice == 1) {
					Time = Time - 0.2;
					Consumption = Consumption - 1;
					cout << "Great cornering" << endl;
				} else if (choice == 2) {
					Time = Time + 0.3;
					Consumption = Consumption + 1;
					cout << "Accelerating too Early.... :(" << endl;
				} else if (choice == 3) {
					Time = Time ;
					Consumption = Consumption;
					cout << "Green Minisector" << endl;
				}
			//high speed corner
			} else if (speed == 3) {
				if (choice == 1) {
					Time = Time + 0.1;
					Consumption = Consumption;
					cout << "Fine Speed" << endl;
				} else if (choice == 2) {
					Time = Time - 0.1;
					Consumption = Consumption - 1;
					cout << "Perfect ACCELERATION" << endl;
				} else if (choice == 3) {
					Time = Time + 0.6;
					Consumption = Consumption + 6;
					cout << "Too slow,,,,," << endl;
				}
			}
		break;
	}

	cout << endl;
}	

int Corner::get_Speed() {
	return SpeedCorner;
}

Corner::~Corner(){
}