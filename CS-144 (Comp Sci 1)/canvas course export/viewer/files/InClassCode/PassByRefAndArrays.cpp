#include <iostream>
using namespace std;

//To pass by reference, add & after the type
void setToZero(int& number) {
	//change number to have an effect on the
	//  referenced variable
	number = 0;
	return;
}

//Take TWO parameters, both references
// and SWAP their values
void mySwap(int& a, int& b) {
	//int tmp1;
	//int tmp2;
	//tmp1 = a;
	//tmp2 = b;
	//a = tmp2;
	//b = tmp1;
	int tmp = a;
	a = b;
	b = tmp;
	return;
}

int main() {
	int apples = 5;
	cout << "Apples before: " << apples << endl;
	setToZero(apples);
	cout << "Apples after: " << apples << endl;

	int a = 13;
	int b = 16;
	mySwap(a, b);
	cout << "a had 13, now: " << a << endl;
	cout << "b had 16, now: " << b << endl;

	//We have seen pass by reference before
	//getline(cin, userInput)

	//Make some arrays
	//This array can hold 10 integers
	const int size = 10;
	//We can use a constant or a literal for
	//   the size. We do need something which is
	//   not going to change
	int multipleIntegers[size];
	//This second array can hold 3 characters
	char threeLetterWord[3];
	//At this point, DECLARED, but not INITIALIZED

	//Set the value of multipleIntegers AT INDEX 0
	multipleIntegers[0] = 2;
	threeLetterWord[0] = 'c';
	threeLetterWord[1] = 'a';
	threeLetterWord[2] = 'r';

	//Initializer List (alternative way to declare and
	//  initialize all at once)
	int moreInt[4] = { 1,3,5,8 };

	//Access values
	cout << multipleIntegers[0] << endl;
	cout << multipleIntegers[1] << endl; //We didn't init

	//Loop over all valid indexes in threeLetterWord
	//   to print out the full array
	for (int index = 0; index <= 3; index++) {
		cout << threeLetterWord[index];
	}
	cout << endl;

	cout << threeLetterWord << endl;

	//Always need to make a note of how big an array we
	//   made. C++ will not save that information for us.

	return 0;
}



