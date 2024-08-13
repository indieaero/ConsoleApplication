// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "UnionExample.h"
using namespace std;


int main()
{
	UnionExample::oneforall example;
	example.int_val = 4;
	cout << example.int_val;
	example.double_val = 4.0;
	cout << example.double_val;
	//Comment 1
	//Comment 2

	return 0;
}
