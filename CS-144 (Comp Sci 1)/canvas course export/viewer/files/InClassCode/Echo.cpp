#define _USE_MATH_DEFINES

#include <iostream> //for input & output
#include <string>
#include <iomanip> //for setw() and other string manip.
#include <cmath> //for M_PI
using namespace std;

int main() {
	//Initial goal: get a sentence,
	// and echo it back to the user.
	//cin
	//getline
	string userMsg;
	cout << "Enter a message: ";
	getline(cin, userMsg);
	cout << "Your message is: " << endl;
	//First trick: set the width of the output
	// REMEMBER to send to cout like text!
	cout << setfill('#');
	cout << right << setw(80) << userMsg << endl;
	cout << left << setw(80) << userMsg << endl;

	//setw() only affects the next output to cout
	//ONLY expand short outputs, will not modify ones
	//  that are too long

	//right, left to align text
	//setfill(x) change the "fill" character from a space
	//  to whatever character x is

	int n;
	//getline(cin, n); //This doesn't compile
	cout << "Please enter a number: ";
	cin >> n;
	cout << "The number was: " << n << endl;

	string userInput;
	cout << "Please enter another number: ";
	//getline(cin, userInput); //LET'S NOT MIX cin and getline
	cin >> userInput;
	//CONVERT from a string to an int using stoi()
	int n2 = stoi(userInput);
	cout << "num+10 = " << n2 + 10 << endl;
	cout << "Please enter a double: ";
	cin >> userInput;
	double n3 = stod(userInput);
	//For doubles, can setprecision() to say how many sig
	// digits we want to show
	// showpoint - also show trailing zeros
	cout << "firstNum / secondNum = ";
	cout << setprecision(5) << showpoint << n2 / n3 << endl;

	//How many digits of PI does M_PI actually have
	//library <cmath>
	// needed to #define _USE_MATH_DEFINES 
	cout << "Pi: " << setprecision(55) << showpoint
		<< M_PI << endl;

	return 0;
}