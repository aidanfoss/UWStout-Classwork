#pragma once
#include <array>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>  
#include <iostream>

using namespace std;

class HashTable {
private:
	int numBeforeCollision = -1;
	int numCollisions = -1;
	int numBefore29 = -1;
	int counter = 0;
	int loadnine;
	int loadone;
	vector<int> arr[29];

	bool cont = true;
	bool lone = true;
	bool lnine = true;

public:
	HashTable() {}

	void hashPush(int i) {
		//cout << endl;
		counter++;
		double temp = counter / 29.0;
		temp = (int)(temp / 0.1) * 0.1; //shortens double to one decimal point, so i can use if statements later
		//cout << temp << endl;
		//cout << i;
		if (arr[i].size() > 0) 
		{ 
			if (numBeforeCollision == -1) {
				numBeforeCollision = counter;
				//cout << "  first collision! - " << numBeforeCollision;
			}
			else {
				//cout << "collision!";
				if (arr[i].size() == 29) {
					cont = false;
					numBefore29 = counter;
				}
			}
			numCollisions++;
		}
		arr[i].push_back(i);
		if (temp == 1 && lone) {
			//cout << temp << " ~~~ 1 at " << counter << endl;
			loadone = counter;
			lone = false;
		}
		else if (temp == 0.9 && lnine) {
			//cout << temp << " ~~~~ .9 at " << counter << endl;
			loadnine = counter;
			lnine = false;
		}
	}

	void fill() {
		//srand(time(NULL));
		while (cont) {
			hashPush(rand() % 29); //simulates a hash
		}
	}

	int getNumBeforeCollision() { return numBeforeCollision; }
	int getNumCollisions() { return numCollisions; }
	int getNum29() { return numBefore29; }
	int getLoadNine() {
		//cout << loadnine << endl;
		return loadnine;
	}
	int getLoadOne() { 
		//cout << loadone << endl;
		return loadone; 
	}
};