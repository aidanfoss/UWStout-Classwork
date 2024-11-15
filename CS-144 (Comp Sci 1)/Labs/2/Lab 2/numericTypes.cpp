#include <iostream>
#include <string>
using namespace std;

//This program demonstrates how numeric types and operators behave in C++

int main()
{
	//identifier declarations
	const int NUMBER = 2;			// number of scores
	const int SCORE1 = 100;			// first test score
	const int SCORE2 = 95;			// second test score
	const int BOILING_IN_F = 212;  	// boiling temperature
	int fToC;						// temperature in celsius
	double average;					// arithmetic average
	string output;					// line of output to print out
	//TASK #2 declare variables used here
	//TASK #3 declare variables used here
	//TASK #4 declare variables used here
	//TASK #5 declare variables used here

	// Find an arithmetic average
	average = SCORE1 + SCORE2 / NUMBER;
	cout << SCORE1 << " and " << SCORE2 << " have an average of " << average << endl;

	// Convert Fahrenheit temperatures to Celsius
	fToC = 5 / 9 * (BOILING_IN_F - 32);
	cout << BOILING_IN_F << " in Fahrenheit is " << fToC << " in Celsius." << endl;
	
	cout << endl;		// to leave a blank line
	
	// ADD LINES FOR TASK #2 HERE
	// prompt the user for full name
	// read the user's full name
	// print out the user's full name 

	cout << endl;		// to leave a blank line

	// ADD LINES FOR TASK #3 HERE
	// get the first character from the user's full name
	// print out the user's first initial
	// print out the number of characters in the user's full name 

	cout << endl;		// to leave a blank line

	// ADD LINES FOR TASK #4 HERE
	// prompt the user for a diameter of a sphere
	// read the diameter
	// calculate the radius
	// calculate the volume 
	// print out the volume
	
	cout << endl;		// to leave a blank line
	
	// ADD LINES FOR TASK #5 HERE
	// generate three winning numbers 0-9
	// print the three numbers
	
}