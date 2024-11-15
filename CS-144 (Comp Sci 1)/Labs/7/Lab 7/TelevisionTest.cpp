#include <iostream>
#include <cassert>
#include "Television.h"
using namespace std;

int main()
{
	Television bigScreen ("Visio", 70);

	cout << "Testing bigScreen" << endl;
	assert(bigScreen.GetManufacturer() == "Visio");
	assert(bigScreen.GetScreenSize() == 70);
	assert(bigScreen.GetChannel() == 2);
	assert(bigScreen.GetVolume() == 20);
	bigScreen.IncreaseVolume();  //should only work if power is on
	assert(bigScreen.GetVolume() == 20);
	bigScreen.DecreaseVolume();  //should only work if power is on
	assert(bigScreen.GetVolume() == 20);
	bigScreen.SetChannel(5); //should only work if power is on
	assert(bigScreen.GetChannel() == 2);
	bigScreen.Power();  //turn power on
	bigScreen.DecreaseVolume();
	assert(bigScreen.GetVolume() == 19);
	bigScreen.IncreaseVolume();
	assert(bigScreen.GetVolume() == 20);
	cout << "Testing bigScreen complete" << endl;

	
	
	
	
	
	cout << "All testing complete" << endl;
}