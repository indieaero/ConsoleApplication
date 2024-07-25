#pragma once
#include <iostream>
using namespace std;

class UnionExample
{
public:

	union oneforall
	{
		int int_val;
		long long_val;
		double double_val;
	};

	union widget
	{
		char brand[20];
		union id //формат зависит от типа widget 
		{
			
		};
	};

};

