// localScope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int x; // first user input
	int y; // second user input

	std::cout << "Enter an integer: ";
	std::cin >> x;
	
	std::cout << "Enter a larger integer: ";
	std::cin >> y;
	
	if (x > y)
	{
		std::cout << "Swapping the values \n";
		int temp = x;
		x = y;
		y = temp;
	} // temp is detroyed

	std::cout << "The smaller value is " << x << "\n";
	std::cout << "The larger value is " << y << "\n";
	
	
	return 0;
} // x and y are destroyed

