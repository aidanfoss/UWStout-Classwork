#pragma once
#include <string>
#include <iostream>
using namespace std;

template <typename T>
class ListNode {
private:
	ListNode<T>* prev;
	ListNode<T>* next;
public:
	T data;
	ListNode(T inData, ListNode<T>* n, ListNode<T>* p) {
		data = inData;
		next = n;
		prev = p;
	}
	ListNode(T inData, ListNode<T>* p) {
		data = inData;
		next = nullptr;
		prev = p;
	}
	ListNode(T inData) {
		data = inData;
		next = nullptr;
		prev = nullptr;
	}
	~ListNode() {
		delete next;
		delete prev;
	}
	T getData() { return data; }
	ListNode<T>* getPrev() { return prev; }
	ListNode<T>* getNext() { 
		//cout << next << endl;
		return next; 
	}
	void setData(T inData) { data = inData; }
	void setPrev(ListNode<T>* p) { prev = p; }
	void setNext(ListNode<T>* n) { next = n; }
};

template <typename T>
class LinkedList {
private:
	int size; //how many items in the list
	ListNode<T>* head; //point to the head of the chain
	ListNode<T>* tail;
public:
	LinkedList() {
		size = 0;
		head = nullptr;
		tail = nullptr;
	}
	/*
	~LinkedList() {
		delete &head;
		delete &tail;
	}
	*/

	int getSize() { return size; }
	ListNode<T>* getHead() { return head; }

	void printAll() {
		ListNode<T>* cur = head;
		for (int i = 0; i < size; i++) {
			cout << cur->data << " ";
			cur = cur->getNext();
		}
		cout << endl;
	}

	void add(T a) {
		if (size == 0) {
			ListNode<T>* newNode = new ListNode<T>(a);
			head = newNode;
			tail = newNode;
			//delete newNode;
			size++;
		}
		else {
			ListNode<T>* newNode = new ListNode<T>(a, tail);
			tail->setNext(newNode);
			tail = newNode;
			//delete newNode;
			size++;
		}
	}
};



template <typename T>
class ShadowArray {
private:
	T *mainArray;
	T *shadArray;
	int numElements;
	int size;
	int shadowSize;
	int counter;
	bool flipSwitch;

	//functions i only want to use inside other functions
	void flip() { //puts shadowarray in mainarrays place and creates a new shadowarray
		mainArray = shadArray;
		size = shadowSize;
		shadowSize = shadowSize * 2;
		counter = 0;
		shadArray = new T[shadowSize];
		flipSwitch = true; //find a better solution!
	}

	void shadCount(){
		if (flipSwitch) {
			shadArray[counter] = mainArray[counter];
			counter++;
		}
	}

public:
	ShadowArray() { //empty constructor
		mainArray = new T[2];// constructorArray[2];
		shadArray = new T[4];// constructorShadowArray[4];
		numElements = 0;
		counter = 0;
		size = 2;
		shadowSize = 4;
		flipSwitch = false; //find a better solution!
	}
	~ShadowArray() {
		delete mainArray;
		delete shadArray;
	}

	int getNumElements() { return numElements; }
	int getSize() { return size; }
	int getShadowSize() { return shadowSize; }
	
	void printArray() { //test function
		for (int i = 0; i < numElements; i++) {
			cout << mainArray[i] << " ";
		}
		cout << endl;
	}

	void add(T a) {
		mainArray[numElements] = a;
		shadArray[numElements] = a;
		numElements++;
		shadCount();
		if (numElements == size) {
			flip();
			//cout << "flipped!" << endl;
		}
		//printArray();//test
	}


	//this test is only looking at the one function adding to the end, so thats what im going to write
	
};