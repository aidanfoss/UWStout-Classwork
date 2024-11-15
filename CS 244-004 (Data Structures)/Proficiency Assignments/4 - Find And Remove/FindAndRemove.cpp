#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void remove4s(vector<int>& data); //Removes all 4s from a vector of ints

int main() {
	srand(time(NULL));
	vector<int> data(10);
	for (int i = 0; i <= data.size()-1; i++) {
		data[i] = rand() % 5;
	}
	for (int i = 0; i <= data.size() - 1; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	remove4s(data);
	for (int i = 0; i <= data.size() - 1; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}

void remove4s(vector<int>& data) {
	for (int i = 0; i <= data.size() - 1; i++) { //checks every loop to see if i is bigger than size, considering size changes every time theres a 4
		while(data[i] == 4) { //while instead of if so if theres multiple 4s in a row it gets all of them
			data.erase(data.begin()+i);
		}
		//ran 10 times with random numbers, succeeded each time at removing only the fours without crashing or removing anything extra
	}
}

