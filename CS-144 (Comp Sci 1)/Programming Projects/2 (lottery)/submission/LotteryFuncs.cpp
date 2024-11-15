#include <iostream>
#include <cstdlib> // c standard library, use for rand()		
#include <ctime> // for srand(time(NULL)) , also for time()
#include "Header.h"
using namespace std;

//generates 5 unique numbers % 99
void getNumbers(int(&lottery)[5]) {
    srand(time(NULL));
    for (int i = 0; i < 5; i++) { //get the initial 5 random numbers
        lottery[i] = rand() % 99;
    }
    for (int reroll = 0; reroll < 5; reroll++) { //run the checker 5 times to minimize chances of re-roll into already existing number
        for (int i = 0; i < 5; i++) { //for loop to  check for duplicate numbers
            for (int j = 0; j < 5; j++) {
                if (i != j) {
                    if (lottery[i] == lottery[j]) {
                        lottery[i] = rand() % 99; //if a dupe is found, reroll it
                    }
                }
            }
        }
    }

    cout << "winning lottery numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << lottery[i] << endl; // i left this in on purpose, thought it might make grading easier for you
    }                               // otherwise i would have deleted it
    cout << "i left this in on purpose for your grading, thought it might help" << endl << endl;
}

//has the user input 5 valid numbers
void getUserInput(int(&userInput)[5]) {
    cout << "input numbers between 1 and 99" << endl;
    for (int i = 0; i < 5; i++) {
        do {
            cout << "what is your guess for number " << i + 1 << " between 1 and 99: ";
            cin >> userInput[i];
        } while (userInput[i] > 99 || userInput[i] < 1); //stop invalid inputs
    }
    cout << endl;
}

//compares winning lottery numbers to the inputted numbers from the user
int compareLottery(int(&lottery)[5], int(&userInput)[5]) {
    int correctGuesses = 0; // accumulator to remember how many correct guesses there are
    for (int i = 0; i < 5; i++) { //i is the lottery value, incremented one at a time
        //cout << "winning lottery number " << i << " is " << lottery[i] <<endl;
       // cout << "your guess at number " << i << " was " << userInput[i] << endl;
        cout << endl;
        for (int j = 0; j < 5; j++) {
            if (lottery[i] == userInput[j]) {
                correctGuesses++;
            }
        }
    }
    cout << "your guesses were: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << userInput[i] << endl;
    }
    cout << "winning lottery numbers are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << lottery[i] << endl;
    }
    return correctGuesses;
}

//takes the amount of correct matches and outputs how much the user won
int displayWin(int correct) {
    cout << endl << endl;
    int earnings = 0;
    if (correct == 0) {
        cout << "you got no matches :(" << endl << "you earn nothing" << endl;
        earnings = 0;
    }
    else if (correct == 1) {
        cout << "one match, you earned 2$" << endl;
        earnings = 2;
    }
    else if (correct == 2) {
        cout << "two matches, you earned 10$" << endl;
        earnings = 10;
    }
    else if (correct == 3) {
        cout << "three matches, you earned 30$" << endl;
        earnings = 30;
    }
    else if (correct == 4) {
        cout << "four matches, you earned 200$" << endl;
        earnings = 200;
    }
    else if (correct == 5) {
        cout << "five matches, you earned 600$" << endl;
        earnings = 600;
    }
    return earnings;
}
