#include <iostream>
using namespace std;

int main() {
	//Syntax for a branch
	//if (CONDITION) {
	//  //stuff to do if the condition is true
	//}
	bool cond = false;
	cout << "This is before the if statement!" << endl;
	if (cond) {
		//This is the "body" of the if statement
		cout << "Our condition was true!" << endl;
	}
	cout << "This is after the if statement!" << endl;

	//We can also use boolean type expressions
	// as conditions: x < 10

	//Operators that take numbers and evaluate to bool
	// >, <, >=, <=, ==, !=
	int grade;
	cin >> grade;
	if (grade >= 94) {
		cout << "This is an A!" << endl;
	}
	if (grade >= 84) {
		cout << "This is a B!" << endl;
	} //Since we put two "if" statements in a row,
	//They might BOTH trigger and BOTH execute
	return 0;
}