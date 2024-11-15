// Written by Aidan Foss
// October, 2021

//#define _USE_MATH_DEFINES // with <cmath> (MUST GO AT THE TOP)
//#include <cmath> // for use of M_PI

#include <cstdlib> // c standard library, use for rand()
#include <ctime> // for srand(time(NULL)) , also for time()

//#include <fstream> //for filestream, for inputting and outputting to files

#include <string> // for USING strings
//#include <iomanip> // for setw() and other string manipulation

#include <iostream> // for cout and cin
using namespace std; // for cout and cin
//imported ALL previously used dependancies, 


/*
my idea is to generate a random number 1-3 (rand % 3 + 1)
	1 is rock, 2 is paper, 3 is scissors
	----Do this each loop---
ask for user input (cin), grab the first letter and make it lowercase (tolower())
	use a switch statement on those character values (R, P and S)



	init variables
	set playGame to true
	while playgame = true
		generate random computer output (R, P or S)
		get user input (R, P, or S)
		compare user to computer manually

		if user == r
			if computer == p
				user loses
			if computer == r
				Tie!
			if computer == s
				user wins
*/
int main() {
	srand(time(NULL));
	bool gamePlay = true; // init bool that decides if the game keeps going

	string userInput; // user int
	int computerInt; // random rps int
	
	char computerChar;
	char userChar;
	
	while (gamePlay) {	
		computerInt = (rand() % 3) + 1;
		//cout << "test computerInt output:" << computerInt << endl; // test functional rand()
		//generate computer output

		if (computerInt == 1) {
			computerChar = 'r';
		}
		else if (computerInt == 2) {
			computerChar = 'p';
		}
		else if (computerInt == 3) {
			computerChar = 's';
		}
		//turn computer output into a char
		do {
			cout << "Rock, Paper, Or Scissors?" << endl;
			cin >> userInput;
			userChar = tolower(userInput.front());
			//cout << userChar << endl; // test, comment out later
			//get user input and turn it into a char (r, p, or s)
		} while (!((userChar == 'r') || (userChar == 'p') || (userChar == 's')));
		switch (computerChar)
		{
			case 'r': //computer rock
				cout << "Computer chose: Rock" << endl;
				if (userChar == 'r') {				//user rock
					cout << "Tie!" << endl;			//Tie!
				}
				else if (userChar == 'p') {			//user paper
					cout << "You Won!" << endl;		//user win 
				}
				else if (userChar == 's') {			//user sciss
					cout << "You Lost!" << endl;	//user loss 
				}
				break;
			case 'p':
				cout << "Computer chose: Paper" << endl;
				if (userChar == 'r') {				//user rock
					cout << "You Lost!" << endl;	// loss
				}
				else if (userChar == 'p') {			// user paper
					cout << "Tie!" << endl;			// Tie! 
				}
				else if (userChar == 's') {			//user sciss
					cout << "You Won!" << endl;		// win 
				}
				break;
			case 's': //computer scissor
				cout << "Computer chose: Scissors" << endl;
				if (userChar == 'r') {				//user rock
					cout << "You Won!" << endl;		//win
				}
				else if (userChar == 'p') {			//user paper
					cout << "You Lost!" << endl;		//loss 
				}
				else if (userChar == 's') {			//user sciss
					cout << "Tie!" << endl;	//Tie! 
				}
				break;
			default:

				break;
		}
		cout << endl; //spacing
		bool corRes;
		do {
			cout << "play again? (y/n)" << endl;
			cin >> userInput; //reusing userinput and userchar because i can
			userChar = tolower(userInput.front());
			if (userChar == 'y') {
				gamePlay = true; // allow game to repeat
				corRes = true; //verify a correct response
			}
			else if (userChar == 'n') {
				gamePlay = false; // close game
				corRes = true; // verify a correct response
			}
			else {
				corRes = false;
				cout << "incorrect response." << endl;
			}
		} while (!corRes);
		
	}
	
	return 0;
}