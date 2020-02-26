#include <iostream>
#include <vector>
#include <string>
#include "F1Car.h"

using namespace std;

//CONSTRUCTOR
F1Car::F1Car() {
	Team = "No Name";
	Driver = "No Name";

	Setup = 3;
}

void F1Car::set_Setup() {
	//Then we manipulate the seting here and let the user ask to go for another.
	cout << "Change car set up?" << endl;
	cout << "1: Extreme Downforce" << endl;
	cout << "2: A lot of Downforce" << endl;
	cout << "3: Medium Setup" << endl;
	cout << "4: Good Efficiency" << endl;
	cout << "5: Extreme Efficiency" << endl;
	Setup = get_choice(5);
}

int F1Car::get_choice(int num) {
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

//SETTER
void F1Car::set_Team() {
	cout << endl;
	cout << "Choose the team" << endl;

	cout << "1: Mercedes" << endl;
	cout << "2: Ferrari" << endl;
	cout << "3: Red Bull" << endl;
	cout << "4: McLaren" << endl;
	cout << "5: Renault" << endl;
	cout << "6: Toro Rosso" << endl;
	cout << "7: Racing Point" << endl;
	cout << "8: Alfa Romeo" << endl;
	cout << "9: Haas" << endl;
	cout << "10: Williams" << endl;
	
	bool state = false;
	int teamChoice;
	while (state != true) {
		cout << "Input: ";
		cin >> teamChoice;

		if (teamChoice > 0 && teamChoice <= 10) {
			state = true;
		}
	}

	switch (teamChoice) {
		case 1:
			Team = "Mercedes";
			TeamNum = 1; 
			break;
		case 2:
			Team = "Ferrari";
			TeamNum = 2;
			break;
		case 3:
			Team = "Red Bull";
			TeamNum = 3;
			break;
		case 4:
			Team = "McLaren";
			TeamNum = 4;
			break;
		case 5:
			Team = "Renault";
			TeamNum = 5;
			break;
		case 6:
			Team = "Toro Rosso";
			TeamNum = 6;
			break;
		case 7:
			Team = "Racing Point";
			TeamNum = 7;
			break;
		case 8:
			Team = "Alfa Romeo";
			TeamNum = 8;
			break;
		case 9:
			Team = "Haas";
			TeamNum = 9;
			break;
		case 10:
			Team = "Williams";
			TeamNum = 10;
			break;
	}
}

void F1Car::set_Driver(int aTeamNum) {
	int driverChoice;
	cout << "Choose the driver via using number" << endl;

	bool state = false;

	while (state != true){
		
		switch (aTeamNum) {
			case 1:
				cout << "1: Hamilton" << endl;
				cout << "2: Bottas" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Hamilton";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Bottas";
					state = true;
				}
				break;

			case 2:
				cout << "1: Vettel" << endl;
				cout << "2: Leclerc" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Vettel";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Leclerc";
					state = true;
				}
				break;

			case 3:
				cout << "1: Verstappen" << endl;
				cout << "2: Albon" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Verstappen";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Albon";
					state = true;
				}
				break;

			case 4:
				cout << "1: Sainz" << endl;
				cout << "2: Norris" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Sainz";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Norris";
					state = true;
				}
				break;

			case 5:
				cout << "1: Ricciardo" << endl;
				cout << "2: Hulkenburg" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Ricciardo";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Hulkenburg";
					state = true;
				}
				break;

			case 6:
				cout << "1: Gasly" << endl;
				cout << "2: Kvyat" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Gasly";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Kvyat";
					state = true;
				}				
				break;

			case 7:
				cout << "1: Perez" << endl;
				cout << "1: Stroll" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Perez";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Stroll";
					state = true;
				}
				break;

			case 8:
				cout << "1: Raikkonen" << endl;
				cout << "2: Giovinazzi" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Raikkonen";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Giovinazzi";
					state = true;
				}				
				break;

			case 9:
				cout << "1: Grosjean" << endl;
				cout << "2: Magunessen" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Grosjean";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Magunessen";
					state = true;
				}
				break;

			case 10:
				cout << "1: Kubica" << endl;
				cout << "2: Russel" << endl;
				driverChoice = get_choice(2);
				if (driverChoice == 1) {
					Driver = "Kubica";
					state = true;
				} else if (driverChoice == 2) {
					Driver ="Russel";
					state = true;
				}				
				break;
		}
		cout << endl;
	}
}

//GETTER
string F1Car::get_Team() {
	return Team;
}

int F1Car::get_TeamNum() {
	return TeamNum;
}

string F1Car::get_Driver() {
	return Driver;
}

int F1Car::get_Setup() {
	return Setup;
}

string F1Car::get_aStringSetup(int aSetup) {
	switch (aSetup) {
		case 1:
			return "Extreme Downforce";
			break;
		case 2:
			return "High Downforce";
			break;
		case 3:
			return "Mid Downforce";
			break;
		case 4:
			return "High Efficiency";
			break;
		case 5:
			return "Extreme Efficiency";
			break;
	}
}

int F1Car::get_DownForce() {
	
}

int F1Car::get_Efficiency() {
}

//DECONSTRUCTOR
F1Car::~F1Car(){
}