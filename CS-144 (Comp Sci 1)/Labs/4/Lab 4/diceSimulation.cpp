#include <iostream>
using namespace std;

// This class simulates rolling a pair of dice 10,000 times and
// counts the number of times doubles of are rolled for each different
// pair of doubles.

int main()
{
	const int NUMBER = 10000;	//the number of times to roll the dice

	int die1Value;      	// number of spots on the first die
	int die2Value;      	// number of spots on the second die
	int count = 0;	     	// number of times the dice were rolled
	int snakeEyes = 0;  	// number of times snake eyes is rolled
	int twos = 0;			// number of times double two is rolled
	int threes = 0;			// number of times double three is rolled
	int fours = 0;			// number of times double four is rolled
	int fives = 0;			// number of times double five is rolled
	int sixes = 0;			// number of times double six is rolled

	//ENTER YOUR CODE FOR THE ALGORITHM HERE

	cout << "You rolled snake eyes " << snakeEyes << " out of " << count << " rolls." << endl;
	cout << "You rolled double twos " << twos << " out of " << count << " rolls." << endl;
	cout << "You rolled double threes " << threes << " out of " << count << " rolls." << endl;
	cout << "You rolled double fours " << fours << " out of " << count << " rolls." << endl;
	cout << "You rolled double fives " << fives << " out of " << count << " rolls." << endl;
	cout << "You rolled double sixes " << sixes << " out of " << count << " rolls." << endl;
}