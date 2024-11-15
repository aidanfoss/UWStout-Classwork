#include "Pro6.h"

int main() {
	PrintableVector<int> vect;
	PrintableList<int> list;

	list.insert(list.size() + 1, 10);
	vect.insert(vect.size() + 1, 20);

	cout << vect << endl;
	cout << list << endl;
	return 0;
}