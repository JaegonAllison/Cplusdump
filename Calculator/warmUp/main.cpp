#include<iostream>
#include<string>
#include "Calculator.h"

using namespace std;

bool goAgain = 1;
string mathFunc;


void main(){
	Calculator calc;

	cout << "THIS IS THE MATH FUN ZONE! \n \n";
	
	while (goAgain)
	{

		cout << "what is your first number? \n";

		float firstNum = 0.0;
		cin >> firstNum;

		cout << "do you want to add (a), subtract (s), multiply (m), or divide (d)? \n";

		cin >> mathFunc;
		if (mathFunc == "add" || mathFunc == "subtract" || mathFunc == "multiply" || mathFunc == "divide" || mathFunc == "a" || mathFunc == "s" || mathFunc == "m" || mathFunc == "d") {

			cout << "What is your next number? \n";

			float secondNum = 0.0;
			cin >> secondNum;

			if (mathFunc == "add" || mathFunc == "a") {
				calc.addFunction(firstNum, secondNum);
			}
			else if (mathFunc == "subtract" || mathFunc == "s") {
				calc.subFunction(firstNum, secondNum);
			}
			else if (mathFunc == "multiply" || mathFunc == "m") {
				calc.mulFunction(firstNum, secondNum);
			}
			else if (mathFunc == "divide" || mathFunc == "d") {
				calc.divFunction(firstNum, secondNum);
			}

			cout << "\n Enter 1 to do maths again or 0 to exit the fun zone \n ";

			cin >> goAgain;

			cout << "\n \n";

		}
		else {
			cout << "That is not a math function. \n";
		}


	}


}


