#ifndef F1CAR_H
#define F1CAR_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class F1Car {
protected:
	string Team;
	int TeamNum;
	string Driver;

	int Setup;
public:
	//CONSTRUCTOR
	F1Car();

	int get_choice(int num);

	//SETTER VARIABLES
	void set_Team();
	void set_Driver(int aTeamNum);

	void set_Setup();

	//GETTER
	string get_Team();
	string get_Driver();

	int get_TeamNum();

	int get_Setup();
	string get_aStringSetup(int aSetup);

	//using the data of the setup, find the downforce and the drag level
	int get_DownForce();
	int get_Efficiency();

	//DESTRUCTURE
	~F1Car();
};

#endif