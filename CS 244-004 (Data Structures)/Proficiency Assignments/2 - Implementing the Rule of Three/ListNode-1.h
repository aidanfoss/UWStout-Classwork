#pragma once
#include <string>
#include <iostream>

template <typename T>
class ListNode {
private:
	T data;
	ListNode<T>* prev;
	ListNode<T>* next;
public:
	ListNode(T inData, ListNode<T>* n, ListNode<T>* p) {
		data = inData;
		next = n;
		prev = p;
	}
	ListNode(T inData, ListNode<T>* n) {
		data = inData;
		next = n;
		prev = nullptr;
	}
	ListNode(T inData) {
		data = inData;
		next = nullptr;
		prev = nullptr;
	}
	T getData() { return data; }
	ListNode<T>* getPrev() { return prev; }
	ListNode<T>* getNext() { return next; }
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
	//copy constructor
	LinkedList(const LinkedList<T>& input) {
		this->size = input->size;
		this->head = input->head;
	}
	
	//destructor
	~LinkedList() {
		delete head;
		delete tail;
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
		ListNode<T>* newNode = new ListNode<T>( input, head );
		head->setNext(newNode);
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
	void append(T item) {
		//inset a newly created node at the end of the chain
		ListNode<T>* newNode = new ListNode<T>{ item , nullptr };
		if (size == 0) {
			cout << "size was 0, setting both tail and head to " << &newNode << endl;
			tail = newNode;
			head = newNode;
			size++;
			cout << "increasing size to " << size << endl;
			cout << "items value: " << item << "; newNode.getData: " << newNode->getData() << endl;
		}
		else{
			cout << "size was > 0, setting last listnodes and tail to newnode (" << &newNode << ")" << endl;
			tail->setNext(newNode);
			tail = tail->getNext();
			size++;
			cout << "increasing size to " << size << endl;
			cout << "items value: " << item << "; newNode.getData: " << newNode->getData() << endl;
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
			cout << cur->getData() << endl;
			cur = cur->getNext();
		}
	} //custom print function for testing

	/* broken fix later lol hi professor
	void printAllBackwards() {
		printAllBackwardsHelper(size-1, head);
		return;
	}

	void printAllBackwardsHelper(int i, ListNode<T>* cur) {
		if (i <= 0) { return; }
		ListNode<T>* out = cur;
		out->next();
		printAllBackwardsHelper(i - 1, out);
		cout << cur.getData() << endl;
		return;
	}
	*/
};