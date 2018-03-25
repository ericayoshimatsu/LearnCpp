// Chapter7p11_Ex3_Binary.cpp : Defines the entry point for the console application.
//
/*
3a) This one is slightly trickier. Write a program that asks the user to enter an integer, 
and then uses a recursive function to print out the binary representation for that number. 
Use method 1 from lesson 3.7 -- Converting between binary and decimal. Assume the number the 
user enters is positive.

Hint: Using method 1, we want to print the bits from the "bottom up", which means in reverse order. 
This means your print statement should be _after_ the recursive call.

3b) Update your code from 3a to handle the case where the user may enter 0 or a negative number.

Here's a sample output (assuming 32-bit integers):

Enter an integer: -15
11111111111111111111111111110001

Hint: You can turn a negative integer into a positive one by static casting it to an unsigned integer.
These have identical bit representations (the type is used to determine how to interpret the number).
*/

#include "stdafx.h"
#include <iostream>

void printBinary (int num)
{
	// termination case
	if (num <= 0)
		return;
	else
	{	
		printBinary(num/2);
		// print binary digit
		std::cout << num%2;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	bool fail = 1;
	while (fail)
	{
		std::cout << "Enter integer value: ";
		std::cin >> num;

		// extraction failed
		if (std::cin.fail()) 
		{
			//clear flag
			std::cin.clear(); 
			// remove invalid input
			std::cin.ignore(32767,'\n');
			std::cout << "Invalid input. Try again \n";
		}
		else
		{
			std::cin.ignore(32767,'\n'); // remove extra input
			fail = 0;
		}
	}

	std::cout << "You've entered " << num << "\n";
	
	printBinary(num);
	std::cout << "\n";

	return 0;
}

