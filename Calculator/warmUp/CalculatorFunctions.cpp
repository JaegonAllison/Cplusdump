#include "Calculator.h"
#include <iostream>
#include <string>
using namespace std;




void Calculator::addFunction (float first, float second) {
	float answer = 0.0;
	answer = (first + second);
	cout << "Your answer is \n";
	cout << answer;
}

void Calculator::subFunction(float first, float second) {
	float answer = 0.0;
	answer = (first - second);
	cout << "Your answer is \n";
	cout << answer;
}

void Calculator::mulFunction(float first, float second) {
	float answer = 0.0;
	answer = (first * second);
	cout << "Your answer is\n";
	cout << answer;

}

void Calculator::divFunction(float first, float second) {
	float answer = 0.0;
	answer = (first / second);
	cout << "Your answer is \n";
	cout << answer;

}

void Calculator::calcProgram() {
	bool calcGoAgain = 1;
	float firstNum = 0.0;
	string mathFunc;
	float secondNum = 0.0;
	string doMaths;


	while (calcGoAgain)
	{

		cout << "what is your first number? \n";


		cin >> firstNum;

		cout << "do you want to add (a), subtract (s), multiply (m), or divide (d)? \n";

		cin >> mathFunc;
		if (mathFunc == "add" || mathFunc == "subtract" || mathFunc == "multiply" || mathFunc == "divide" || mathFunc == "a" || mathFunc == "s" || mathFunc == "m" || mathFunc == "d") {

			cout << "What is your next number? \n";

			cin >> secondNum;

			if (mathFunc == "add" || mathFunc == "a") {
				addFunction(firstNum, secondNum);
			}
			else if (mathFunc == "subtract" || mathFunc == "s") {
				subFunction(firstNum, secondNum);
			}
			else if (mathFunc == "multiply" || mathFunc == "m") {
				mulFunction(firstNum, secondNum);
			}
			else if (mathFunc == "divide" || mathFunc == "d") {
				divFunction(firstNum, secondNum);
			}

			cout << "\n Do fun maths again?! \n ";
			cout << "y / n \n ";

			cin >> doMaths;
			if (doMaths == "y") {
				calcGoAgain = 1;
			}
			else {
				calcGoAgain = 0;
			}


			cout << "\n \n";

		}
		else {
			cout << "That is not a math function. \n";
		}
	}

}