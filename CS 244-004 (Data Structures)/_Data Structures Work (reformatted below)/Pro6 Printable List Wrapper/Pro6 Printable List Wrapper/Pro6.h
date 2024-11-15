#pragma once
#include <list>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//parent PrintableIterable
template <typename T>
class PrintableIterable{
public:
	PrintableIterable() { cout << "iterable" << endl; }
	//all virtual public functions
	virtual void insert(T value, int index) = 0;
	virtual void remove(int index) = 0;
	virtual T get(int index) = 0;
	virtual int size() = 0;
	friend ostream& operator<<(ostream& stream, PrintableIterable print); //overloads << to allow string printing
};

//child PrintableVector
template <typename T>
class PrintableVector : public PrintableIterable<T> {
private:
	vector<T> vect{};
public:
	PrintableVector() : PrintableIterable<T>() {}
	void insert(T value, int index) { vect.insert(vect.begin() + index, value); }
	void remove(int index) { vect.erase(vect.begin()+index); }
	T get(int index) { return vect.at(index); }
	int size() { return vect.size(); }
	friend ostream& operator<<(ostream& stream, PrintableVector vec) { //returns string
		for (int i = 0; i < vec.size(); i++)
		{
			stream << vec.get(i) << ", ";
		}
		return stream;
	}
};

//child PrintableList
template <typename T>
class PrintableList : public PrintableIterable<T>{
private:
	list<T> list{};
public:
	PrintableList() : PrintableIterable<T>() {};
	void insert(T value, int index) { 
		auto iter = list.begin();
		advance(iter, index);
		list.insert(iter, value); 
	}

	void remove(int i) { 
		auto iter = list.begin();
		advance(iter, i);
		list.erase(iter); 
	}

	T get(int i) {
		auto iter = list.begin();
		advance(iter, i);
		T ret = *iter;
		return ret;
	}
	int size() { return list.size(); }
	friend ostream& operator<<(ostream& stream, PrintableList list) {//returns string
		for (int i = 0; i < list.size(); i++)
		{
			stream << list.get(i) << ", ";
		}
		return stream;
	}

};