#include <iostream>
using namespace std;

int main() {
	//CODE From Branches.cpp on Friday
	int grade;
	cin >> grade;
	if (grade >= 94) {
		cout << "This is an A!" << endl;
	}
	else if (grade >= 84) {
		cout << "This is a B!" << endl;
	}
	else if (grade >= 74) {
		cout << "This is a C!" << endl;
	}
	else if (grade >= 64) {
		cout << "This is a D!" << endl;
	}
	else {
		cout << "This is an F!" << endl;
	}
		//Since we put two "if" statements in a row,
	//They might BOTH trigger and BOTH execute
	return 0;
}