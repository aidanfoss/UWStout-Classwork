#include <iostream>
#include <string>
using namespace std;

int main() {
	//Accumulator
	// fancy name for a variable whose job is to
	// hold information, and add to that info over time
	string sentenceSoFar = ""; //Accumulator
	//expect sentenceSoFar += some other string

	//Get a sentence from the user, word by word
	//  stop when the user enters "."
	string userWord;
	cout << "To end the sentence, enter \".\"" << endl;
	while (userWord != ".") {
		cout << "Please give me a word: ";
		cin >> userWord;
		if (userWord == ".") {
			//make sure no space before the last period
			// we'll use sentenceSoFar.at()
			sentenceSoFar.at(sentenceSoFar.length() - 1) = '.';
			
			//This is a trick for the java & python users, 
			// but we cannot use "negative indexing" in C++
			//sentenceSoFar.at(-1) = '.'; 
			
			//make sure no space after the last period
			//sentenceSoFar = sentenceSoFar + userWord;
		}
		else {
			sentenceSoFar = sentenceSoFar + userWord + " ";
		}
	}
	cout << sentenceSoFar;
	cout << "###########" << endl;

	//for loop
	//TASK: reprint the letters in sentenceSoFar with
	//  extra spaces everywhere
	for (int counter = 0;
		counter < sentenceSoFar.length();
		counter++) {
		//Looping over positios in sentence
		//during each pass of the loop, counter takes on
		// a new value
		cout << sentenceSoFar.at(counter) << " ";
	}
	cout << endl;

	// TASK: Modify the previous loop so that it
	//  prints ThE SeNtEnCe.
	// (Use toupper and tolower)
	cout << "Alternate case ex:" << endl;
	bool capitalTime = true;
	for (int i = 0; i < sentenceSoFar.length(); i++) {
		char current = sentenceSoFar.at(i);
		if (capitalTime) {
			current = toupper(current);
		}
		else {
			current = tolower(current);
		}
		cout << current;
		capitalTime = !capitalTime; //Alternating flag
	}
	cout << endl;

	return 0;
}