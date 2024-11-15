#include <iostream>
#include <ctime> //for srand
#include <cstdlib> //for rand
using namespace std;

void experimentWithArrays();

int main() {
	//Have our main ONLY call a function
	//Do all of the work in that function
	experimentWithArrays();
	return 0;
}

//Usually we put fn prototypes all the way at the top
// but we don't technically have to
// Just before the functions that call them
void fillWithRandoms(int myArray[], int arraySize);

void experimentWithArrays() {
	//Declare an array that can hold up to 100 integers.
	int oneHundredInts[100];

	//Declare and initialize using an initializer list
	// an array of 5 doubles
	double fiveDoubles[5] = { -0.4, 55, 20.3, 0.0, 10.1 };
	
	//Assign value at index
	oneHundredInts[50] = 1000000;
	fiveDoubles[0] = 15.9;

	//Access value at index
	cout << "oneHundredInts[50]: " << oneHundredInts[50] << endl;
	double val = fiveDoubles[3];
	cout << "val has: " << val << endl;

	fillWithRandoms(oneHundredInts, 100);
	for (int i = 0; i < 100; i++) {
		cout << "oneHundredInts[" << i << "]: ";
		cout << oneHundredInts[i] << endl;
	}
	return;
}

//Write a function to fill an array of ints with random
// values

//Attempt 1: This DOES NOT WORK
// CANNOT return an array
//int[] fillWithRandoms() {
//}

//Attempt 2: Pass By Reference!
// Arrays are always passed by reference
//Unfortuantely, functions cannot enforce the size of the
// array they're given as an argument
void fillWithRandoms(int myArray[], int arraySize) {
	srand(time(NULL)); //Seed our random number generator
	//Start
	for (int i = arraySize-1; i >= 0; i--) {
		myArray[i] = rand();
	}
	return;
}



