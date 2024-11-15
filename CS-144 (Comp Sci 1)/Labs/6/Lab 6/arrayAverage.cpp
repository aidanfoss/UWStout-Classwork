#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//Task #2    4.	Write a function called Average that takes constant parameters of the array and the size of the array, 
//then returns the average of the values in the array.  


//Task #3   1.	Write a function called FindMax that takes constant parameters of the array and the size of the array, 
//then returns the index of the maximum value in the array.


//Task #3   3.	Write a function called FindMin that takes constant parameters of the array and the size of the array, 
//then returns the index of the minimum value in the array.



int main()
{
	ifstream infile;
	int index = 0;
	double difference;
	double sum = 0;
	double mean = 0;
	int maxIndex;
	int minIndex;

	string filename = "Numbers.txt";
	const int ARRAY_SIZE = 50;
	
	//Task #2   2. Declare the double  array here
	

	//promt the user and read in the file name
	cout << "This program calculates the average of the numbers in an array.  We will fill the array with the first 50 integers from a file." << endl;
	
	infile.open(filename);
	
	if (!infile.is_open())
	{
		cout << "Could not open file." << endl;
		return 1;
	}
	while (!infile.eof() && index < ARRAY_SIZE)
	{
		//Task #2     3. Read the values from the file into the array.
		

		if (!infile.fail())
		{
			index++;
		}
	}
	
	infile.close();

	//Task #2   5.	Call the Average function in the main after the array was filled and store the result into mean. 
	

	//Task #2   6.	Print out the average rounded to 4 decimal places, appropriately labeled.
	

	//Task #3   2.  Call the FindMax function and store the result in maxIndex.
	

	//Task #3   4.  Call the FindMin function and store the result in minIndex.
	

	//Task #3   5.	Use the maxIndex and minIndex to print the min and max values in the list, appropriately labeled.  
	

	return 0;
}