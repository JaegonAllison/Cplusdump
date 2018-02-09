#include "Calculator.h"
#include <iostream>
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