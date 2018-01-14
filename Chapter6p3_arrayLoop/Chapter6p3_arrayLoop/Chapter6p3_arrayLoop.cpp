// Chapter6p3_arrayLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	const int arrayLen = sizeof(array)/sizeof(array[0]);
	
	int number =0;

	// get number between 1 and 9 from user
	do
	{
		std::cout << "Enter an integer between 1 and 9: ";
		std::cin >> number;

		// check input validity
		if(std::cin.fail())
		{
			std::cout << "Invalid input. \n";
			std::cin.clear();
			std::cin.ignore(32767,'\n');
		}
	}
	while (number<1 || number >9);

	// find index of user number
	int index = -1;
	for (int count = 0; count < arrayLen; ++count)
	{
		if (array[count] == number)
			index = count;
	}

	std::cout << "user input: " << number << "\n";
		std::cout << index << "\n";
	return 0;
}

