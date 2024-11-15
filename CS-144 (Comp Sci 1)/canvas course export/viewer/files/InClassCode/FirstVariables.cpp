#include <iostream>
using namespace std;

// This is my starting point "main" function
// I will demonstrate how variables work!
int main() {
	//The body of the program.
	//My code goes here!
//	cout << "Hello world!";

	//Types
	//double - number possibly with decimal value
	//      3.5, 1000000000000000000
	//int - integer
	//		number between ~-2billion and +2billion
	//short, long
	//		integer numbers, but with different max/min


	double time;
	int height;

	//Experiment: What happens if we try to give decimal
	// value to an int variable.
	height = 7.2;
	height = 7.8;
	cout << height << endl; // We still got 7. 
	// Attempting to give a decimal val to an int
	// TRUNCATED the value

	//Got error saying "unititialized local variable "time" used
	//double timeSquared = time * time;
	//cout << "timeSquared: " << timeSquared << endl;

	time = 5;
	time = 7;

	return 0;
}