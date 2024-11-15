#include <iostream>
using namespace std;

int main() {
	//Boolean (bool) expressions
	bool a = true;
	bool b = false;
	bool c = a && b; //c is false
	cout << "c should be false now: " << c << endl;

	//Three operators (&&, ||, !)
	//Which takes precedence?
	//Make your guess!
	//Guesses:
	//   ! first, && and || equal precedence, go left->right
	//   && then || then !
	//   ! first, then ||, then &&

	//   ! first, then &&, then || (testing showed this is correct!)

	//Test for the priority of !
	cout << "!true&&false: " << (!true && false) << endl;

	//Test for && vs ||
	cout << "false&&false||true: ";
	cout << (false && false || true) << endl;
	//If the priority is tied and we go left->right
	//  then this one should have a different answer
	cout << "true||false&&false: ";
	cout << (true || false && false) << endl;

	cout << "(false||false)&&true: ";
	cout << ((false || false) && true) << endl;

	//rand();

	return 0;
}