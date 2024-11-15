#include <iostream>
#include <vector>
#include <chrono>
#include "Header.h"
using namespace std;

template <typename T>
void printVect(vector<T> vect);

int main() {
	ShadowArray<int> shad;
	LinkedList<int> linkd;
	vector<int> vect;

	auto startShad = chrono::high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		shad.add(i + 1);
	}
	auto stopShad = chrono::high_resolution_clock::now();
	auto durationShad = chrono::duration_cast<chrono::microseconds>(stopShad - startShad);

	auto startLink = chrono::high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		linkd.add(i + 1);
	}
	auto stopLink = chrono::high_resolution_clock::now();
	auto durationLink = chrono::duration_cast<chrono::microseconds>(stopLink - startLink);
	
	auto startVect = chrono::high_resolution_clock::now();
	for (int i = 0; i < 1000000; i++) {
		vect.push_back(i + 1);
	}
	auto stopVect = chrono::high_resolution_clock::now();
	auto durationVect = chrono::duration_cast<chrono::microseconds>(stopVect - startVect);
	
	/* //useless print functions, unless this info is somehow relevant
	auto startz = chrono::high_resolution_clock::now();
		shad.printArray();
	auto stopz = chrono::high_resolution_clock::now();
	auto durationz = chrono::duration_cast<chrono::microseconds>(stopz - startz);


	auto startx = chrono::high_resolution_clock::now();
	linkd.printAll();
	auto stopx = chrono::high_resolution_clock::now();
	auto durationx = chrono::duration_cast<chrono::microseconds>(stopx - startx);

	auto startc = chrono::high_resolution_clock::now();
	printVect(vect);
	auto stopc = chrono::high_resolution_clock::now();
	auto durationc = chrono::duration_cast<chrono::microseconds>(stopc - startc);
	*/
	
	
	cout << "duration of shadowArray: " << durationShad.count() << endl;
	cout << "duration of linkedList: " << durationLink.count() << endl;
	cout << "duration of vector: " << durationVect.count() << endl;
	/* time the print functions
	cout << "duration of ShadArrayPrint: " << durationz.count() << endl;
	cout << "duration of LinkedPrint: " << durationx.count() << endl;
	cout << "duration of VectorPrint: " << durationc.count() << endl;
	*/
	return 0;
}



template <typename T>
void printVect(vector<T> vect) {
	for (int i = 0; i < vect.size(); i++) {
		cout << vect.at(i) << " ";
	}
	cout << endl;
}