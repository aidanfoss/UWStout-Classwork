#include <iostream>
#include <string>
using namespace std;

//Notes on how to improve this program:
//  int-->double (because calculators usually work that way)
//  declare result at the top to reduce copy-pasted code

//Other notes:
// NEVER use == to compare doubles

int main() {
	//Get two numbers and an "operation" from the user
	// Output the result of the right calculation
	//DECLARATION
	int firstNum;
	int secondNum;
	string op;

	//INITIALIZATION
	cout << "Please input something: ";
	cin >> firstNum;
	cout << endl; //Make sure there's a newline between inputs
	cout << "Please input something: ";
	cin >> secondNum;
	cout << "Please input an operation: ";
	cin >> op;

	//Possibility: "/"
	if (op == "/") {
		// Variables declared inside the BODY
		// of an if block ONLY exist within that if
		// body.
		int result = firstNum / secondNum;
		cout << "Answer: " << result << endl;
	}
	if (op == "*") {
		int result = firstNum * secondNum;
		cout << "Answer: " << result << endl;
	}
	// Remember: always use == for testing equality
	if ("+" == op) {
		int result = firstNum + secondNum;
		cout << "Answer: " << result << endl;
	}
	if (op == "-") {
		int result = firstNum - secondNum;
		cout << "Answer: " << result << endl;
	}

	return 0;
}