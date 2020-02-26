#include "Barcelona.h"
#include "Circuit.h"
#include "Corner.h"
#include "F1Car.h"
#include "minisector.h"
#include "Straight.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {

	cout << "This game is simulation of the F1 winter testing held in Catalunya Circuit in Spain." << endl;
	cout << "when you run the car, you can as fast as you can but you have tyre limit." << endl;
	cout << "Once the tyre consumption overs certain limit, the lap time will be invalid which means tyre failure" << endl;

	//declaring the variables
	Barcelona barcelona;
	vector<Corner> Corner = barcelona.get_ListCorner();
	vector<Straight> Straight = barcelona.get_ListStraight();

	//map to store the lap - time information
	int lapNum = 0;
	vector<Circuit> PitBoard;

	//finding the size of the vector for further for loop
	int sizeVector = Corner.size() + Straight.size();

	//before we go through the user choice, we have to let the user to choose the team and the driver
	F1Car yourF1;
	yourF1.set_Team();
	yourF1.set_Driver(yourF1.get_TeamNum());

	cout << "Here we start our first installation lap" << endl;

	//we use the bool variable to decide when to finish the while loop
	bool firstLoop = true;
	bool secondLoop = true;

	//first loop
	while (firstLoop == true) {

		string SETUP = yourF1.get_aStringSetup(yourF1.get_Setup());
		cout << "Your car Setup level is " << SETUP << "." << endl;

		//second loop
		while (secondLoop == true) {

			PitBoard.push_back(Circuit(lapNum+1));

			//use the for loop to go through the multiple choice
			int j = 0;
			int y = 0;
			for (int i = 0; i < sizeVector; i++) {
				if (i == 0 || i == 9) {
					if (i == 0) {
						cout << Straight.at(j).get_Name() << endl;
					}
					Straight.at(j).SetTimeConsump(yourF1.get_Setup());
					j++;
				} else if (i != 0 || i != 9) {
					cout << "Approaching to " << Corner.at(y).get_Name() << endl;
					int n = Corner.at(y).get_Speed();
					Corner.at(y).SetTimeConsump(n,yourF1.get_Setup());
					y++;
				}
			}

			//sector time
			//find the total time and total tyre consumption
			int TyreLap = 0;
			int s = 0;
			int l = 0;

			for (int i = 0; i < sizeVector; i++) {
				int sectorNum;

				//to find which sector it locates
				if (i == 0 || i == 9) {
					sectorNum = Straight.at(s).get_Sector();
				} else {
					sectorNum = Corner.at(l).get_Sector();
				}

				//actually caluculates the time and consumption
				if (i == 0 || i == 9) {
					switch (sectorNum) {
						case 1:
							PitBoard.at(lapNum).set_S1(Straight.at(s).get_Time());
							break;
						case 2: 
							PitBoard.at(lapNum).set_S2(Straight.at(s).get_Time());
							break;
						case 3:
							PitBoard.at(lapNum).set_S3(Straight.at(s).get_Time());
							break;
					}
					TyreLap += Straight.at(s).get_Consumption();
					s++;

				} else {
					switch (sectorNum) {
						case 1:
							PitBoard.at(lapNum).set_S1(Corner.at(l).get_Time());
							break;
						case 2:
							PitBoard.at(lapNum).set_S2(Corner.at(l).get_Time());
							break;
						case 3:
							PitBoard.at(lapNum).set_S3(Corner.at(l).get_Time());
							break;
					}
					TyreLap += Corner.at(l).get_Consumption();
					l++;
				}
			}

			bool lapCheck = true;
			if (TyreLap > 100) {
				lapCheck = false;
				PitBoard.at(lapNum).set_Totaltime(lapCheck);
			} else {
				PitBoard.at(lapNum).set_Totaltime(lapCheck);
			}

			//store the lap information in map.
			lapNum++;

			//See whether user want to do another lap or not.
			string input;
			cout << "One more lap? [Y/N] "; 
			cin >> input;
			if (input == "Y") {
				secondLoop = true;
			} else {
				secondLoop = false;
			}
		}

		cout << "Lap |S1   |S2   |S3   |Total Time " << endl;
		for (int i = 0; i < PitBoard.size(); i++) {
			cout << i+1 << "   |" << PitBoard.at(i).get_S1() << " |" << PitBoard.at(i).get_S2() << " |"<< PitBoard.at(i).get_S3() << " |" << PitBoard.at(i).get_Totaltime() << endl;
		}

		//ask the user want to go for another lap or not
		cout << "The Car is in the garrage, driver is ready. Do you want to go? [Y/N]" << endl;
		string answer; 
		cin >> answer;
		if (answer == "Y") {
			firstLoop = true;
			secondLoop = true;
			yourF1.set_Setup();
			cout << endl;
		} else {
			firstLoop = false;
			cout << endl;
		}

	}

	cout << "Great Job, your contribution helped team to prepare for first GRAND PRIX in Melbourne" << endl;

	return 0;
}