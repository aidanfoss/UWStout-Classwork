#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//Some heaps are used to manage items whose value is separate from their priority.
//This helper class allows us to directly compare "HeapEntry" items by comparing
// their priorities.
//Note the fields are public. This class is effectively a "pair".
class HeapEntry {
public:
	//Fields
	string data;
	int priority;

	//Constructor
	HeapEntry(string d, int p) {
		data = d;
		priority = p;
	}

	//Operator overloads
	bool operator<(const HeapEntry& other) {
		return priority < other.priority;
	}
	bool operator>(const HeapEntry& other) {
		return priority > other.priority;
	}
	bool operator==(const HeapEntry& other) {
		return priority == other.priority;
	}
	bool operator<=(const HeapEntry& other) {
		return priority <= other.priority;
	}
	bool operator>=(const HeapEntry& other) {
		return priority >= other.priority;
	}
};

class MaxHeap {
private:
	//Fields
	vector<HeapEntry> data;
	int size{ 0 }; //Number of items stored
	int capacity{ 0 }; //Number of items that can be stored without expanding the vector.

	//Private helper methods
	void reheapifyUpOld(int currentIndex) {
		cout << "reheapify up called; size: " << currentIndex << endl;
		prints();
		for (int i = currentIndex; i > 0; i = (i / 2)) { //loop keeps reheapifying up,
			//get parent of indexed element's value
			int parentInd = ((i - (i % 2)) / 2);
			if (parentInd == 0) { cout << "likely first call, nothing to reheapify" << endl; return; }
			cout << "parentInd=" << parentInd << endl;
			cout << "childInd=" << i << endl;
			HeapEntry parent = data.at(parentInd); //((5 - 1) / 2) = 2, the mod%2 stops any decimals.
			HeapEntry child = data.at(i);
			if ((i % 2) == 1) { //check if on right of parent
				//child should be larger than parent here
				if (child.priority < parent.priority) {
					data.at(i) = parent; //sets the value of the child to the parent's index
					data.at(parentInd) = child; //sets the value of the parent to the child's index
					//effectively swaps them
					cout << "swappped, child is now larger." << endl;
					print();
				}
			}
			else { //left of parent
				//child should be smaller than parent here. i is still the index of the child
				if (child.priority > parent.priority) {
					data.at(i) = parent; //gives the childs index the value of the parent
					data.at(parentInd) = child; //gives the parents index the value of the child
					//effectively swaps them
				}

			}
		}
	}
	void reheapifyUp(int currentIndex) {
		cout << endl << endl << "reheapify up called; size: " << currentIndex << endl;
		print(); //hopefully will display even just the first element each time
		//find parents index
		//the second input is index 1, therefore i should add one to it before doing
		//the small amount of math, and then subtract that one at the end
		//((1+1)%2)-1
		int parInd = ((currentIndex+1)/2) - (currentIndex % 2);
		cout << currentIndex << " " << parInd << endl << "---\n";
		for (int i = currentIndex; i > 0; i = (i / 2)) {
			HeapEntry child = data.at(currentIndex);
			HeapEntry parent = data.at(parInd);
			//find if currentIndex node is on the left or right of its parent
			if ((currentIndex + 1) % 2 == 0) { //left
				cout << "child is on the left of its parent" << endl;
				//childs prio should be smaller than its parent
				if (child > parent) {
					//swap
					prints();
					cout << "swapping child and parent" << endl;
					data.at(parInd) = child;
					data.at(currentIndex) = parent;
					prints();
				}
				else {
					cout << "alr in good order" << endl;
					prints();
				}
			}
			if ((currentIndex + 1) % 2 == 1) { //right
				//childs prio should be larger than its parent
				if (child < parent) {
					//swap
					prints();
					cout << "swapping child and parent" << endl;
					data.at(parInd) = child;
					data.at(currentIndex) = parent;
					prints();
				}
				else {
					cout << "alr in good order" << endl;
					prints();
				}
			}
		}
	}

	void reheapifyDown(int currentIndex) {
		//TODo
	}

public:
	//Constructor
	MaxHeap() {
		//data.push_back(HeapEntry("", 0)); //Place a black entry into index 0 in the vector.
		// Recall that we put the root in index 1!
	}

	//Public Methods
	void enqueue(HeapEntry x) {
		data.push_back(x);
		reheapifyUp(size);
		size++; //reordered so print works immediately
		//capacity++;
	}

	HeapEntry peek() {
		if (size > 0) {
			return data.at(1);
		}
		else
		{
			cout << "nothing is there, cannot peek at nothing" << endl;
			return HeapEntry("error heapentry", 0);
		}
	}

	HeapEntry dequeue() {
		if (size > 0) {
			HeapEntry save = data.at(1);
			data.erase(data.begin() + 1);
			size--;
			return save;
		}
		else {
			cout << "cannot dequeue nothing, returning error HeapEntry" << endl;
			return HeapEntry("error HeapEntry", 0);
		}
	}

	int getSize() { return size; }

	//Helper function for testing - display the entire heap in index order
	void print() {
		cout << "-----\n";
		for (int i = 0; i < data.size(); i++) {
			cout << i << " : " << data[i].priority << " " << data[i].data << endl;
		}
		cout << "-----\n";
	}

	void prints() {
		//cout << "-----\n";
		for (int i = 0; i < data.size(); i++) {
			cout << data[i].priority << " ";
		}
		cout << endl;
		//cout << "-----\n";
	}
	void layerPrint() {
		int temp = 1;
		int count = 0;
		while (temp >= data.size()) {
			temp * 2;
			count++;
		}
		cout << data[0].priority << endl;

		cout << data[1].priority << " " << data[2].priority << endl;
		cout << data[3].priority << " " << data[4].priority << " " << data[5].priority << " " << data[6].priority << endl;
 	}

	//Helper function for testing - return the data vector
	vector<HeapEntry> reportData() {
		return data;
	}

};