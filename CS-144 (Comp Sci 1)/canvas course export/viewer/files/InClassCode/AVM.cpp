#include <iostream>
#include <string>
using namespace std;

int main() {
	//This time the USER will select a secret word
	//The program should ask questions and then make
	//  a guess.

	//The first question is always:
	// "Is it an animal, a vegetable, or a mineral?"
	cout << "Is it an animal, a vegetable, or a mineral?";
	string itemType;
	cin >> itemType;
	if ("animal" == itemType) {
		//At this point, we know it's an animal
		cout << "Is it wild or domestic?";
		string animalType;
		string furOrFeathers;
		cin >> animalType;
		if ("wild" == animalType) {
			cout << "Fur or feathers?";
			//string furOrFeathers; //IF declared here, only
			//  available within the body of this IF statement
			cin >> furOrFeathers;
			//Assume user ONLY inputs "fur" or "feathers"
			if ("fur" == furOrFeathers) {
				cout << "I think it's a bear!" << endl;
			}
			else {
				cout << "I think it's a flamingo!" << endl;
			}
		}//end if type is wild-animal
		else if ("domestic" == animalType) {
			cout << "Fur or feathers?";
			cin >> furOrFeathers;
		}//end else if type is domestic-animal
	}//end if type is animal
	return 0;
}