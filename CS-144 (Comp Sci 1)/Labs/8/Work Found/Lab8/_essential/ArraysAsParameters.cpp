#include <iostream>
using namespace std;

void DoubleValue(int myArray[], int size);
void TripleValue(int* arrayPtr, int size);

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	
	//fill the array
	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = 5 * i;
	}

	//print the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	
	//call DoubleValue
	DoubleValue(numbers, SIZE);
	//print the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	int *numPtr = &numbers[0];									
	//& is the address-of operator					
	//* is the pointer operator i think
	//idk what im doing

	TripleValue(numPtr, SIZE);
	//print the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	return 0;
}

void DoubleValue(int myArray[], int size) {
	for (int i = 0; i < size; i++) {
		myArray[i] = myArray[i] * 2;
	}
}

void TripleValue(int* arrayPtr, int size) {
	for (int i = 0; i < size; i++) {
		*(arrayPtr+i) = *(arrayPtr+i) * 3;
		//tbh idk what i did right to fix this. it was working, 
		//i smacked a few * or & here or there and continued if the red squiggle went away
	}
}

