#include <iostream>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ifstream file("LISP.txt");

	//string content((istreambuf_iterator<char>(file)),(istreambuf_iterator<char>())); 
	//i really wanted to use this, i knew something like it existed so i googled it
	//turns file into one string by ignoring next characters

	string content = ""; //first char will get ignored when i go back to check, so it wont matter
	char tChar;
	while (file.get(tChar)) {
		if (tChar != '\n') { if (tChar != ' ') { content.push_back(tChar); } }
	}
	
	//cout << content << endl << endl;
	queue<int> deck;

	for (int i = 0; i < content.length(); i++) {
		//cout << "testloop" << endl;
		if (content.at(i) == '(') { //add a 1 to the queue
			cout << "(";
			deck.emplace(1);
		}
		if (content.at(i) == ')') {	//add a -1 to the queue
			cout << ")";
			deck.emplace(-1);
		}
		//dont need to check anything else, because making a large queue full of zeros would be wasteful
	}
	cout << endl;
	int grabSize = deck.size();
	int tParse = 0;
	for (int i = 0; i <= grabSize; i++) {
		if (deck.size() >= 1) {
			tParse = tParse + deck.front(); //finds the sum of tParse
			//cout << "popped " << deck.front() << endl << tParse << endl;
			deck.pop();
			if (tParse < 0) {
				cout << "not a valid lisp program, there is an open right parenthesis!" << endl;
				return 0;
			}
		}
	}
	if (tParse != 0) {
		cout << "not a valid lisp program, there is an open left parenthesis!" << endl;
		return 0;
	}
	else {
		cout << "valid program!" << endl;
	}
}