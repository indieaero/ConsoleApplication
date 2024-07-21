#include "Convert.h"

#include <iostream>
using namespace std;

void Convert::StoneToLb()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	const int pounds = 14 * stone;
	cout << stone << " stone are ";
	std::cout << pounds << " pounds.\n";
}
