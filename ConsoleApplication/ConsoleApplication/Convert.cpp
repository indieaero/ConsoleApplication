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

Convert::productinfo Convert::createStruct(string product_name, int product_volume, double product_price)
{
	productinfo product;
	product.name = product_name;
	product.volume = product_volume;
	product.price = product_price;
	return product;
}


