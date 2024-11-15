#pragma once
using namespace std;

//generates 5 unique numbers between 1 and 99
void getNumbers(int(&lottery)[5]);

//has the user input 5 valid numbers
void getUserInput(int(&userInput)[5]);

//compares winning lottery numbers to the inputted numbers from the user
int compareLottery(int(&lottery)[5], int(&userInput)[5]);

//takes the amount of correct matches and outputs how much the user won
int displayWin(int correct);