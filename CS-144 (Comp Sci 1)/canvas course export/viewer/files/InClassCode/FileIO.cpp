#include <iostream>
#include <fstream>
#include <cstdlib> //For rand()
#include <ctime> //For time()
#include <string> //for getline()
using namespace std;

int main() {
	//TODO
	//File input
	//(1) create a "input file stream"
	ifstream inFile; //DECLARED
	inFile.open("MoreNumbers.txt"); //(2) Open the file
	//(3) Read the contents of the file
	int val;
	string line;
	while (!inFile.eof()) {
		inFile >> val; // Reads word by word like cin
		//getline(inFile, line);
		if (!inFile.fail()) {
			cout << "Line: " << val << endl;
		}
		else {
			cout << "Line failed!" << endl;
		}
	}
	inFile.close(); //(4)Make sure we close every file we open

	//Let's output random numbers to a new file
	//(1) declare output file stream
	ofstream outputFile;
	//(2) announce where the file will be located & open
	outputFile.open("Numbers2.txt");
	//(3) write to the file some random numbers
	// This will OVERWRITE ANY EXISTING CONTENTS
	srand(time(NULL)); //Set random seed
	for (int i = 0; i < 4; i++) {
		outputFile << (rand() % 500 + 1) << endl;
	}
	outputFile.close(); //(4) close the file

	// How can we add to an existing file?
	//GENERAL PLANS:
	// Get (read in) the existing contents

	//KEY: Remember we can use += to put strings together
	string existingContents;
	string lineIJustRead;
	inFile.open("Numbers2.txt");
	while (!inFile.eof()) {
		getline(inFile, line);
		if (!inFile.fail()) {
			cout << "Line: " << line << endl;
			lineIJustRead = line;
			existingContents += lineIJustRead + "\n";
		}
		else {
			cout << "Line failed!" << endl;
		}
	}
	inFile.close();
	// Write (overwrite) those same existing contents
	// PLUS the new numbers



	//Somewhere in my read file loop
	existingContents += lineIJustRead;
}


