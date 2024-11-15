using namespace std;
#include <iostream>
#include <string>
#include "ListNode.h"

int main() {
	//int length = 5;

	ListNode<string> last("last");
	ListNode<string> five("five", &last);
	ListNode<string> four("four", &five);
	ListNode<string> three("three", &four);
	ListNode<string> two("two", &three);
	ListNode<string> one("one", &two);
	cout << "test zero" << endl;
	ListNode<string> zero("zero", &one);
	cout << "test zero after" << endl;
	//zero.printAll();
	cout << "test ListNode.setNext" << endl;
	//last.setNext(zero);
	cout << endl << endl;

	ListNode<string>* current = &zero;
	while (current != nullptr) {
		cout << current->getData() << endl;
		current = current->getNext();
	}

	cout << endl << endl;
	cout << "Test 1" << endl;
	LinkedList<string> list;
	cout << "Test 2" << endl;
	list.append("0");
	cout << "Test 3" << endl;
	list.append("1");
	list.append("2");
	list.append("3");
	list.append("4");
	list.append("5");
	cout << "Test 4" << endl;
	list.printAll();
	cout << "Test 5" << endl;

	//list.printAllBackwards();


	return 0;
}