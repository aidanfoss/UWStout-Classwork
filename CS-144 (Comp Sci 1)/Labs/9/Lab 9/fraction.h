//************************************************************ Fraction.h
// Purpose:
//   This file contains the class declaraions for a class that does simple
//   fraction manipulation.           
//*************************************************************************
#include <iostream>
using namespace std;
#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
	// operator overload, so we can use standard C++ notation
	// Get a fraction from keyboard.
	friend istream& operator >> (istream& in, Fraction& frac);
	
	// print a fraction to the console
	

	public:
		// The counstructor
		// Set numerator = n, denominator = d.
		// if no second argument (whole number), default is 1 
		//default constructor sets fraction to 0
		Fraction(int n = 0, int d = 1);	

		// copy constructor
		
		
		// destructor
	

		// The print function
		void Show();		  // Display a fraction on screen

		// Addition of fractions
		Fraction Add(const Fraction * f2);

		// Assignment operator
		

		// Overloading operators for addition, multiplication and incrementing
		Fraction operator++ (); // prefix only

		//Overloading operators for == comparison
	

		double Evaluate();	   // Return the decimal value of a fraction
		void Reduce();         // Reduce the fraction to lowest terms.

	private:
		int numerator;	       // top part
		int denominator;	   // bottom part
};
#endif
