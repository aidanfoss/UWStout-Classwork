#pragma once
#include <iostream>

template <typename T> //Generic class: T is the type variable
class SimpleArrayList {
private:
	//Fields
	int numElements; //how many elements are currently stored
	int capacity; //how many elements can we store without resizing
	T* data;//Array to hold the data, we use a pointer type because we dont know how big the array will be
public:
	//Constructor
	SimpleArrayList() {
		numElements = 0;
		capacity = 10;
		data = new T[10];
	}	//Make a SimpleArrayList
	//Copy Constructor
	SimpleArrayList(const SimpleArrayList& other) {
		numElements = other.numElements;
		capacity = other.capacity;
		data = new T[capacity];
		for (int i = 0; i <= numElements; i++) {
			data[i] = other.data[i];
		}
	}
	//Copy Assignment
	SimpleArrayList<T>& operator = (const SimpleArrayList<T>& other) {
		delete[] data;
		numElements = other.numElements;
		capacity = other.capacity;
		data = new T[capacity];
		for (int i = 0; i <= numElements; i++) {
			data[i] = other.data[i];
		}
	}

	~SimpleArrayList() { //Destructor
		delete[] data; //use brackets because data is an array
	}
	//Methods
	int getSize() { return capacity; } //get capacity
	int getNumElements() { return numElements; } //get numElements

	//i woulda prefered void for most of the following few but whateva
	bool append(T element) {				//4
		if (capacity == numElements) {
			return false; //in the future, expand arraylist
		}
		
		//set
		data[numElements] = element;
		numElements++;
		return true;
		
	} //return value says whether append succeeded
	bool prepend(T element) {				//n+3		
		if (capacity == numElements) {
			return false; //in the future, expand arraylist
		}
		for (int i = numElements-1; i >= 0; i--) {
			data[i+1] = data[i];
		}
		data[0] = element;
		numElements++;
		return true;
		//return value says whether append succeeded
	}
	bool insert(T element, int index) { //7 + N
		if (capacity == numElements) {
			return false; //in the future, expand arraylist
		}
		if (numElements == 0) {
			data[0] = element;
			numElements++;
			return true;
		}
		if (index > numElements) {
			data[numElements + 1] = element;
			numElements++;
			return true;
		}
		for (int i = numElements - 1; i >= index; i--) {
			data[i + 1] = data[i];
		}
		data[index] = element;
		numElements++;
		return true;
	}

	bool remove(int index) {					//n+3
		if ((index < 0) | (index > numElements)) { return false; }
		for (int i = index; i <= numElements-1; i++) {
			std::cout << data[i] << " getting replaced with " << data[i + 1] << std::endl;
			data[i] = data[i + 1];
		}
		//if (i == numElements-1) { return true; }
		std::cout << "numElements-- used" << std::endl;
		numElements--;
		return true;
	}
	bool set(int index, T element) { 
		if ((index < 0) | (index > numElements)) { return false; }
		//if (index > capacity) { return false; } //maybe in the future consider using this to increase capacity
		/*
		if (index == numElements + 1) {
			std::cout << "consider using append instead" << std::endl;
			append(element);
			return(true);
		};
		if (index > numElements) {  
			std::cout << "unintended placement? index " << index << " is bigger than the current numElements: " << numElements << std::endl;
			std::cout << "putting the element " << element << " at the end of the list, at index " << numElements + 1 << std::endl;
			data[numElements + 1] = element;
			numElements = numElements+1;
			return true;
		}
		*/
		data[index] = element;
		return true;
	}

	T get(int index, T element) { return T{}; }

	void printArray() {
		for (int i = 0; i <= numElements-1; i++) { std::cout << data[i] << " "; }
		std::cout << std::endl;
	}
	void printFullArray() {
		for (int i = 0; i <= capacity; i++) { std::cout << data[i] << " "; }
		std::cout << std::endl;
	}
	//
	//T at(int loc);

	void randomize() {
		for (int i = 0; i < numElements; i++) {
			data[i] = rand() % 10;
		}
	}

	void insertionSort() {
		int temp;
		int bound = 0; //starts the sorted bounds over the first data piece ( x|y a z )
		//insert data[bound] into sorted part
		for (bound = 0; bound <= numElements; bound++) {
			//std::cout << "bounds : " << bound << std::endl; 
			printArray();
			for (int i = bound-1; i > 0; i--) { //runs until it places the data in the right spot
				if (data[i] < data[i- 1]) {
					std::cout << data[i] << " < " << data[i - 1] << std::endl;
					temp = data[i];
					data[i] = data[i-1];
					data[i-1] = temp;
					//std::cout << "//shift array over, insert at index i, increase bound" << std::endl;
				}
				else { 
					//std::cout << "break" << std::endl; 
					break; 
				}
			}
		}
	}
	void selectionSort() {
		int tempSwap;
		for (int i = 0; i < numElements; i++) {
			int smallestSoFar = i; //stores the index of the smallest number found
			for (int j = i + 1; j < numElements; j++) {
				if (data[j] < data[smallestSoFar]) {
					smallestSoFar = j;
				}
			}
			tempSwap = data[smallestSoFar];
			std::cout << i << " swapped with " << smallestSoFar << std::endl;
			data[smallestSoFar] = data[i];
			data[i] = tempSwap;
			printArray();
		}

	}
};

/*
CUSTOM ARRAYLIST Operations
ListADT

MANDATORY
.at
.erase
.add

"mandatory"
getSize
constructor
destructor
resize
set
get
append/prepend
remove (any index)
insert (any index)

Nice to have
== operator
find (value)

4qhLcsLd78itq5@
*/