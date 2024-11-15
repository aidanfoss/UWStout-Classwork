#include "fraction.h"
using namespace std;

//constructors
fraction::fraction() {


}
fraction::fraction(int n, int d) {
	setNum(n);
	setDen(d);
}

//public methods
double fraction::getDecimal() {
	double thingy;
	thingy = numerator / denominator;
	return thingy;
}


int fraction::getNumerator(){ 
	return numerator;
}

int fraction::getDenominator(){ 
	return denominator;
}

void fraction::setNum(int n) {
	numerator = n;
}

void fraction::setNumerator(int n) {
	numerator = n;
}

void fraction::setDen(int d) {
	if (d != 0) {
		denominator = d;
	}
	else {
		denominator = 1;
	}
}
void fraction::setDenominator(int d) {
	if (d != 0) {
		denominator = d;
	}
	else {
		denominator = 1;
	}
}
//fraction fraction::getReciprocal() {};
//bool fraction::isUndefined{	return false; };