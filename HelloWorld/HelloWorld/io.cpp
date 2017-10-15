// io functions

#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x;
	std::cin >> x;
	return x;
}

void writeNumber(int x)
{
	std::cout << "The sum is: " << x << std::endl;
}