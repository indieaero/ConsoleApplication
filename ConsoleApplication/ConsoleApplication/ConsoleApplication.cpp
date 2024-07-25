// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Convert.h"
using namespace std;

int main()
{
	Convert::productinfo toy = Convert::createStruct("Bob", 4, 50.30);
	cout << "Product Name: " << toy.name << ", Volume: " << toy.volume << ", Price: $" << toy.price << endl;
	return 0;
}
