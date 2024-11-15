//#include <>
#include "SimpleArrayList.h"
//using namespace


//constructor
/*
template<typename T> SimpleArrayList<T>::SimpleArrayList() {
	numElements = 0; 
	capacity = 0;
	data = new T{}; 
}	//Make a SimpleArrayList
*/

template<typename T>
SimpleArrayList<T>::~SimpleArrayList() {

} //Destructor

//Methods
template<typename T> 
int SimpleArrayList<T>::getSize() { return capacity; } //get capacity
template<typename T> 
int SimpleArrayList<T>::getNumElements() { return numElements; } //get numElements
	
//i woulda prefered void for most of the following but whateva
template<typename T>
bool SimpleArrayList<T>::append(T element) { return false; } //return value says whether append succeeded

template<typename T>
bool SimpleArrayList<T>::prepend(T element) { return false; } //return value says whether append succeeded

template<typename T>
bool SimpleArrayList<T>::insert(T element, int index) { return false; }

template<typename T>
bool SimpleArrayList<T>::remove(int index) { return false; }

template<typename T>
bool SimpleArrayList<T>::set(int index, T element) { return false; }

template<typename T>
T SimpleArrayList<T>::get(int index, T element) { return T{}; }

//this is a challenge
template<typename T>
T SimpleArrayList<T>::at(int loc){}