#pragma once
#include <string>
using namespace std;

class Convert
{
public:

	struct productinfo
	{
		string name;
		int volume;
		double price;
	};

	static void StoneToLb();

	//Define method to create struct. CreateStruct will return type productinfo.
	static productinfo createStruct(string product_name, int product_volume, double product_price);
};

