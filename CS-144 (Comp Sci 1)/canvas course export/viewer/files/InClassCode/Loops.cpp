#include <iostream>
using namespace std;

int main() {
	//while
	/*
	while (CONDITION) {
		BODY
	}
	*/

	//One reason to use a loop:
	//  do something multiple times

	//Ex: print "hello!" 10x
	// Use a "counter" variable
	int i = 0; //i is a common counter name
	while (i < 10) {
		cout << "hello! " << i << endl;
		i++; //Increment the counter
		//i=i+1;
	}

	//Counting take 2
	// Use a "counter" variable
	i = 0; //i is a common counter name
	cout << "Before" << endl;
	while (i > 10) { //while will cause its body
		//to run 0 or more times, depending on the condition
		// we use to control it
		cout << i << endl;
		i++; //Increment the counter
		//i=i+1;
	}
	cout << "After " << endl;


	//Input validation variant 1
	int userIn;
	cout << "Please enter a number (1-10): ";
	cin >> userIn;
	while (userIn < 1 || userIn>10) {
		cout << userIn << " not in range (1-10)" << endl;
		cout << "Please enter another number: ";
		cin >> userIn;
	}
	cout << "You entered " << userIn << endl;

	//Input validation take 2
	//Check the condition at the end
	// So we always do the loop body at least once
	int userIn2;
	do {
		cout << "Please enter (1-5): ";
		cin >> userIn2;
	} while (userIn2 < 1 || userIn2 > 5);
	cout << "You guessed " << userIn2 << endl;

	return 0;
}




