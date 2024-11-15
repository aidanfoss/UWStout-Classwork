#pragma once

class fraction {
private:
	//fields
	int numerator{ 0 };
	int denominator{ 1 };
public:
	//constructors
	fraction();
	fraction(int n, int d);

	//public methods
	double getDecimal();
	int getNumerator();//get numerator
	int getDenominator();//get denominator
	void setNum(int n);
	void setDen(int d);
	void setNumerator(int n);
	void setDenominator(int d);
	//bool isUndefined;
	//fraction getReciprocal();


};