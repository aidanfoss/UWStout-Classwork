#pragma once
#include <string>
#include <iostream>

template <typename T>
class ListNode {
private:
	T data;
	ListNode<T>* next;
public:
	// full constructor
	ListNode(T inData, ListNode<T> nextList) { //full constructor
		data = inData;
		next = &nextList;
	}
	ListNode(T inData) { //creates a node with no next, typically at the end that doesnt point to any other nodes
		data = inData;
		next = nullptr;
	}
	ListNode() { //fully empty node constructor
		data = nullptr;
		next = nullptr;
	}
	
	//~ListNode() {
		//delete data; //only have to delete pointers??
		//delete next;
		//delete ListNode<T>;
	//} not needed
	//getter
	T getData() {return data;}
	ListNode* getNext() { return next; }
	
	T setData(T input) {data = input;}
	void setNext(ListNode<T> obj) { 
		next = &obj; 
	}

	/*
	void printAll() {
		std::cout << data << endl;
		if (next != nullptr) {
			next->printAll();
		}
	} //custom print function for testing
	*/
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
		//tail = nullptr;
	}
	//copy constructor
	LinkedList(const LinkedList<T>& input) {
		this->size = input->size;
		this->head = input->head;
	}
	
	//destructor
	~LinkedList() {
		delete head;
		//delete tail;
	}

	LinkedList* operator =(LinkedList<T>& obj) { // = override
		ListNode<T>* curr = new ListNode<T>;
		ListNode<T>* next = new ListNode<T>;
		curr = head;
		for (int i = 0; i < size - 1; i++)
		{
			next = curr->getNext();
			delete curr;
			curr = next;
		}
		delete next;
		for (int i = obj.getSize() - 1; i >= 0; i--)
		{
			this->prepend(obj.getData(i));
		}
		return this;
	}
	

	int getSize() { return size; }
	ListNode<T>* getHead() { return head; }
	//methods
	T getData(int index) {
		//check that index is valid
		if (index < size) {
			//traverse to the correct node
			ListNode<T>* cur = head;
			for (int i = 0; i < index; i++) {
				cur = cur->next();
			}
			return cur->getData();
			//return its data

		}
		
	}
	
	T getRecursive(int index) {
		//call the recursive helper with the right starting pointer
		return getRecursiveHelper(index, head);
	}

	T getRecursiveHelper(int index, ListNode<T>* cur) {
		//base case
		if (index == 0) { return cur->getData; }
		//recursive case
		getRecursiveHelper(index - 1, cur->getNext);
	}

	void prepend(T input) {
		ListNode<T>* newNode = new ListNode<T>( input, *head );
		head->setNext(*newNode);
		head = newNode;
		size++;
	}

	void oldAppend(T item) {
		//inset a newly created node at the end of the chain
		ListNode<T>* cur = head;
		for (int i = 0; i < size-1; i++) {
			cur = cur->next();
		}
		ListNode<T>* newNode = new ListNode<T>{ item , nullptr };
		cur->setNext(newNode);
		size++;
	}
	void Append(T item) {
		//inset a newly created node at the end of the chain
		ListNode<T>* newNode = new ListNode<T>{ item , nullptr };
		if (size == 0) {
			tail = newNode;
			head = newNode;
			size++;
		}
		else{
			tail->setNext(newNode);
			tail = tail->getNext();
			size++;
		}
	}

	T rem(int index) {
		ListNode<T>* before = head;
		ListNode<T>* target = head;
		target->next();
		ListNode<T>* after = head;
		after->next(); 
		after->next();
		for (int i = 0; i < index - 1; i++) {
			before->next();
			target->next();
			after->next();
		}
		//remove the index given
		T temp = target->getData();
		delete target;
		before->setNext(after);
		return temp;
		//change the item before to point to the one after
	}

	void printAll() {
		ListNode<T>* cur = head;
		for (int i = 0; i < size-1 ; i++) {
			std::cout << cur->getData() << endl;
		}
	} //custom print function for testing

	void printAllBackwards() {
		printAllBackwardsHelper(size-1, head);
		return;
	}

	void printAllBackwardsHelper(int i, ListNode<T>* cur) {
		if (i <= 0) { return; }
		ListNode<T>* out = cur;
		cur->getNext();
		printAllBackwardsHelper(i - 1, cur);
		cout << out << endl;
		return;
	}
};