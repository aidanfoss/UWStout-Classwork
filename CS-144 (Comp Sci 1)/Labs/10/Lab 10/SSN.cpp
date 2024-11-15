#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 12;
	char ssNum[SIZE];
	bool isValid = true;	

	cout << "Enter a social security number in the format ###-##-####" << endl;
	//this version of getline stores the typed characters into a c-string 
	cin.getline(ssNum, SIZE); 
	//this is to prove that a c-string ends in 
	if (ssNum[SIZE-1] == '\0') cout << "null character" << endl;

	//validate the format to be ###-##-####
	
	
	
	
	
	return 0;
}