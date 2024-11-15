#include <iostream>
using namespace std;

// Calculate pay based on the hours worked
// and an hourly rate.
// Print what we get!
/*
* This is a multi-line comment
*/
int main() {
	double time;
	double rate;
	cout << "How long did you work? "; //prompt
	cin >> time;
	cout << "What is your pay rate? "; //prompt
	cin >> rate;

	double pay = time * rate;
	// We're using * to multiply
	// Could also use +, -, /, and more
	cout << "Your pay is " << pay << endl;
	return 0; //Need our return statement
}