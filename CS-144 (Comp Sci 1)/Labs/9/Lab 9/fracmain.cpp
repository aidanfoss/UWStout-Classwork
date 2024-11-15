//************************************************************fracmain.cpp
// Purpose:
//   This file contains test code for the fraction class
//*************************************************************************

#include <iostream>		
using namespace std;
#include "Fraction.h"		// for Fraction declarations

int main()
{
   // Try all three possible fraction constructors
   // and the input/output routines.
	
	Fraction f1(3, 2), f2(4), f3, f4;    // four test fractions

	// Test constructor with 2 parameters.
	cout << "The fraction f1 is ";
	f1.Show();
	cout << endl;

	//test constructor with 1 parameter
	cout << "The fraction f2 is ";
	f2.Show();
	cout << endl;
	
	//test default constructor
	cout << "The fraction f3 is ";
	f3.Show();
	cout << endl;

	//test add function
	Fraction f5 = f1.Add(&f2);
	cout << "The sum of fraction f1 + f2  = ";
	f5.Show();
	cout << endl;

	// test the friend function operator >>
	cout << "Now enter a fraction of your own: ";
	cin >> f3;
	cout << "You entered ";
	f3.Show();
	cout << endl;

	// Find the floating-point value of f1
	cout << "The value of ";
	f1.Show();
	cout << " is " << f1.Evaluate() << endl;

	// Now try the overloaded operator +.
	/*f4 = f1 + f3;
	cout << "The sum of " << f1;
	cout << " and " << f3;
	cout << " is " << f4;
	cout << endl;*/

	// Test the ++ operator
	f3.Show();
	cout << " incremented by one is ";
	++f3;
	f3.Show();
	cout << endl;
	
	//Test the * operator
	/*Fraction f6 = f1 * f1;
	cout << "The product of " << f1;
	cout << " and " << f1;
	cout << " is " << f6 << endl;*/

	//Test the == operator
	//if (f1 == f2)//test when they are not equal
	//	cout << f1 << " is equal to " << f2 << endl;
	//else
	//	cout << f1 << " is not equal to " << f2 << endl;
	//
	//if (f1 == f1)//test when they are equal
	//	cout << f1 << " is equal to " << f1 << endl;
	//else
	//	cout << f1 << " is not equal to " << f1 << endl;


	cout << "Enter q to quit..." << endl;
	char key;
	cin >> key;

	return 0;
}