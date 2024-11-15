#include <iostream>
#include <vector> //for vector
using namespace std;

void makeAGrid();

// If this works, we will replace every element with
// -element
void testInvertValues(vector<int>& v);

int main() {
	vector<bool> truesAndFalses(3); //DECLARE a 3-element vec
	  // of booleans

	for (int i = 0; i < 3; i++) {
		cout << i << ": " << truesAndFalses[i] << endl;
	}
	//vector a bools: default value of false

	vector<int> a(5);
	cout << "Testing default values of vectors" << endl;
	cout << "int: " << a[1] << endl;
	vector<double> b(4);
	cout << "double: " << b[2] << endl;

	//This crashes:
//	cout << "Testing accessing out of range" << endl;
//	cout << "int out of range: " << a[8] << endl;

	cout << "The size of vector a: " << a.size() << endl;

	makeAGrid();

	vector<int> testVals = { 0, -5, -2, 8, 11, 4 };
	//Before
	for (int i = 0; i < testVals.size(); i++) {
		cout << i << ": " << testVals[i] << endl;
	}
	testInvertValues(testVals);
	//After
	for (int i = 0; i < testVals.size(); i++) {
		cout << i << ": " << testVals[i] << endl;
	}
	return 0;
}

// If this works, we will replace every element with
// -element
void testInvertValues(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		//Set the new value for v[i]
		v[i] = v[i] * -1;
	}
	return;
}


void makeAGrid() {
	vector<vector<int>> grid(10);
	for (int i = 0; i < 10; i++) {
		grid[i] = { 1,2,3,4,5 };
	}
	//TODO: Change the values in your grid to make
	// some ascii art (text art)
	// Feel free to switch from vector<vector<int>>
	//   to vector<vector<char>> if we you want to

	//Let's try to print to the console all of the ints
	// in our grid
	for (int row = 0; row < 10; row++) {
		for (int column = 0; column < 5; column++) {
			cout << grid[row][column] << " ";
		}
		cout << endl; //new line after the last column in each row
	}
}