#include <iostream>
#include <cstdlib> //c standard library, use for rand()
#include <string> //For USING strings
using namespace std;

int main() {
	cout << "Let's get some random numbers!" << endl;
	cout << rand() << " " << rand() << " " << rand() << endl;
	// RAND_MAX
	cout << "Rand-max: " << RAND_MAX << endl;

	//Characters and Strings
	char c = 'e'; //one letter or symbol
	string s = "any amount of letters, symbols, etc";
	//cin >> s; //Would just allow us to get ONE word
	getline(cin, s); // getline(cin, s)
	s += "\n\n\nthis text below";
	cout << "Contents of s: " << s << endl;

	// Useful chars:
	// \n "newline"


	return 0;
}