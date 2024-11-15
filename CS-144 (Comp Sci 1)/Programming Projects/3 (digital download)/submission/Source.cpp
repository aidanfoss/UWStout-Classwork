#include "DigDow.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void test() {
	//Song** songArray2 = new Song * [numTracks + 1]
	DigDow** DigDowArrayTest = new DigDow * [1];

	//songArray[trackNum] = new Song(title, artist, minutes, seconds);
	DigDowArrayTest[0] = new DigDow("title", "artist", "format", "2015", "60"); //test parameters
	cout << "-----------------------" << endl;
	DigDowArrayTest[0]->Display();
	cout << "-----------------------" << endl;
	cout << DigDowArrayTest[0]->GetTitle() << endl;
	cout << DigDowArrayTest[0]->GetArtist() << endl;;
	cout << DigDowArrayTest[0]->GetFormat() << endl;;
	cout << DigDowArrayTest[0]->GetYear() << endl;;
	cout << DigDowArrayTest[0]->GetPrice() << endl;;
	cout << "-----------------------" << endl;
	return;
}

int main() {
	string inTitle;
	string inArtist;
	string inFormat;
	string inYear;
	string inPrice;
	string inFail;

	test();
	cout << endl << endl;
	int totalDigDows = 0;
	vector<DigDow> DigDowVec(0); //creates a vector of DigDow Objects with no listings
	
	ifstream fileIn;
	fileIn.open("digitaldownloadlist-1.txt"); //opens the file
	if (fileIn.is_open()) {
		while (fileIn.good()) {
			getline(fileIn, inTitle);
			getline(fileIn, inArtist);
			getline(fileIn, inFormat);
			getline(fileIn, inYear);
			getline(fileIn, inPrice);
			getline(fileIn, inFail); //skips the ***** line

			DigDowVec.push_back(DigDow(inTitle, inArtist, inFormat, inYear, inPrice)); //adds an object onto the vector with all its given info
			totalDigDows++; //increments counter for the for loop at the end
		} 
		fileIn.close(); //closes the file after reading its contents
		for (int i = 0; i < totalDigDows; i++) { //displays all the DigitalDownload objects in a list
			DigDowVec[i].Display();
		}
	}
	else {
		cout << "file failed to open" << endl;
	}
	return 0;
}