#include <iostream>
#include <string>
#include <cmath> //for pow
using namespace std;

int main() {
	// Menu of user inputs
	cout << "Please enter a menu option:" << endl;
	cout << "s: square a given number" << endl;
	cout << "p: print a mystery sentence" << endl;
	cout << "o: odds-evens detector" << endl;
	cout << "q: quit early" << endl;
	char userIn;
	cin >> userIn;
	switch (userIn) { 
	case 'o':
		cout << "Enter a number (int)"; 
		int oddEvenInput;
		cin >> oddEvenInput;
		// Remember % is "mod" which is take the remainder
		// "mod" is short for "modulo"
		if (oddEvenInput%2 == 1) {
			cout << oddEvenInput << " is odd!" << endl;
		}
		else if (oddEvenInput%2 == 0) {
			cout << oddEvenInput << " is even!" << endl;
		}
		else {
			cout << "You broke math! What did you do?!" << endl;
		}
		break; //Always end a case with break;
	case 's':
		//Square a given number
		double n;
		cout << "Enter a number: ";
		cin >> n;
		cout << "The square of " << n;
		cout << " is " << pow(n, 2) << endl;
		break;
	case 'p':
		cout << "Peanut butter is good in cereal!" << endl;
		break;
	case 'q':
		//Don't actually do anything
		//Quitting early
		break;
	default:
		cout << "You entered " << userIn;
		cout << ". I don't understand." << endl;
	}

	return 0;
}






