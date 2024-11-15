#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream infile;
	ofstream outfile;
	int counter = 0;
	double value;
	double difference;
	double sum = 0;
	double mean = 0;
	double stdDev = 0;
	string filename;

	//promt the user and read in the file name
	cout << "This program calculates the statistics on a file containing a series of numbers." << endl;
	cout << "Enter the file name: ";
	cin >> filename;

	//ADD LINES FOR TASK #4 HERE
	//open the file and put in a condition that tests that it is open (if not open, return 1 to indicate error)
	//read a value from the file as long as you are not at the end of the file
	//if you were able to read the value, add the value to the sum and increment the counter
	//when you exit the loop, calculate the mean by dividing the sum by the counter
	//close the file 

	

	//ADD LINES FOR TASK #5 HERE
	//reinitialize sum and counter to 0;
	//open the file and put in a condition that tests that it is open (if not open, return 1 to indicate error)
	//read a number from the file as long as you are not at the end of the file
	//if you were able to read the value, subtract the mean from the value and store into difference
	//add the square of the difference to the sum and increment the counter
	//when you exit the loop, calculate the standard deviation by taking the square root of the quotient of the sum and the counter
	//close the file 

	
	
	//ADD LINES FOR TASK #3 HERE
	//open the file "Results.txt" and put in a condition that tests that it is open (if not open, return 1 to indicate error)
	//format the output to have 3 decimal places
	//print the mean and the standard deviation to the file (both labeled)
	//close the output file

	

	return 0;
}