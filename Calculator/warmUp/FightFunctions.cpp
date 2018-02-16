#include "Fight.h"
#include <iostream>
#include <string>
using namespace std;


void Fight::fightProgram() {

	bool fightGoAgain = 1;
	string fightFunc;
	string junk;



	while (fightGoAgain)
	{
		cout << "LETS PLAY A GAME? \n \n";
		cout << "y / n \n \n";

		cin >> fightFunc;
		if (fightFunc == "y") {
			//Start Fight Program



		}
		else {
			fightGoAgain = 0;
		}
	}
	cout << "What a little babay.";
	cin >> junk;


}