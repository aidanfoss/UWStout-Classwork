#include <array>
#include <vector>
#include <stdlib.h>
#include <time.h>  
#include <iostream>
#include "HashTable.h"

using namespace std;
int main() {
	srand(time(NULL));
	double numbefore = 0;
	double numcoll = 0;
	double num29 = 0;
	double loadfactor = 0;
	double loadnine = 0;
	double loadone = 0;

	for (int i = 0; i < 10000; i++) {
		HashTable tab;
		tab.fill();
		numbefore+=tab.getNumBeforeCollision();
		numcoll+=tab.getNumCollisions();
		num29 += tab.getNum29();
		loadnine += tab.getLoadNine();
		loadone += tab.getLoadOne();
		cout << tab.getNumBeforeCollision() << "    " << tab.getNumCollisions() << "     " << tab.getNum29() << endl;
	}
	//HashTable tab;
	cout << endl << endl << endl;
	numcoll = numcoll / 10000;
	numbefore = numbefore / 10000;
	num29 = num29 / 10000;
	loadnine = loadnine / 10000;
	loadone = loadone / 10000;

	cout << "avg num collisions: " << numcoll << endl << "avg num of success before first collision: " << numbefore 
		<< endl << "avg num before 29 in a list " << num29 << endl << "avg num before load factor 0.9: " << loadnine
		<< endl << "avg num before load factor 1.0: " << loadone << endl;

}