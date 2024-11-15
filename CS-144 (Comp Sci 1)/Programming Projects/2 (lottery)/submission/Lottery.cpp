/*
Requirements:  The program should have an array of 5 integers named lottery and should generate a random number in the range of
1 through 99 for each element of the array.  The user should enter five digits, which should be stored in an integer array name
d user.  The program is to compare the corresponding elements in the two arrays and keep a count of the digits that match.  No
global variables can be used.

The program should contain separate functions for separate tasks such as input, processing, and output.  The function used for 
input should allow the user to enter the 5 choices into the user array, validating each entry before storing it into the array. 
You should display the user’s choices as well as the winning lottery numbers correctly labeled.  The function that does the 
processing should search the user array for each of the 5 numbers contained in the lottery array, incrementing a counter when
they match, and returning the number of matches when complete. The function used for output should determine the winnings 
according to the following chart:

                1 match = $2
                2 matches = $10
                3 matches = $30
                4 matches = $200
      5 matches = $600
Note: Order selected does not matter when comparing user numbers to selected lottery numbers.  You may assume that the user will
pick 5 different numbers. You must ensure that the five lottery numbers are different though!*/
#include <iostream>
#include <cstdlib> // c standard library, use for rand()		
#include <ctime> // for srand(time(NULL)) , also for time()
#include "Header.h"
using namespace std;

int main(){
    int lottery[5]; // i dont think these are global variables but if they are i'd be happy to fix it, although i have no idea how to avoid initializing these arrays
    int user[5];
    
    getNumbers(lottery); //get the five unique lottery numbers
    getUserInput(user); //get the users 5 numbers

    displayWin(compareLottery(lottery, user)); //find how many of the users numbers were correct and display earnings based on how many were correct
   
    return 0;
}