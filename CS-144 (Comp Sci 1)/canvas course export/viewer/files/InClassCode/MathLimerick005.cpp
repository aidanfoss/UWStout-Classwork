#include <iostream> //For output
#include <cmath> //For sqrt(), pow()
using namespace std;

int main() {
	//A dozen (12)  a gross (144) and a score (20)
	int dozen = 12;
	int gross = 144;
	int score = 20;
	int line1 = dozen + gross + score;
	//Plus three times the square root of four
	int line2 = line1 + 3 * sqrt(4);
	//Divided by seven
	double line3 = line2 / 7.0;
	//	^This should be an integer but be careful!
	//Plus five times eleven
	double line4 = line3 + 5 * 11;
	//Is nine squared and not a bit more
	double ans = pow(9, 2);
	cout << "Equation left hand side: " << line4 << endl;
	cout << "Equation right hand side: " << ans << endl;
	return 0;
}