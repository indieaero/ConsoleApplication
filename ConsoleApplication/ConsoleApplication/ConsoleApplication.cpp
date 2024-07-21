// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	constexpr inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};

	cout << bouquet.price;

	return 0;
}
