// Chapter6p9a_DynamicArrays.cpp : Defines the entry point for the console application.
//
/*
Quiz

1) Write a program that:
* Asks the user how many names they wish to enter.
* Asks the user to enter each name.
* Calls a function to sort the names (modify the selection sort code from lesson 6.4 -- Sorting an array using selection sort)
* Prints the sorted list of names.

Hint: Use a dynamic array of std::string to hold the names.
Hint: std::string supports comparing strings via the comparison operators < and >

Your output should match this:

How many names would you like to enter? 5
Enter name #1: Jason
Enter name #2: Mark
Enter name #3: Alex
Enter name #4: Chris
Enter name #5: John

Here is your sorted list:
Name #1: Alex
Name #2: Chris
Name #3: Jason
Name #4: John
Name #5: Mark
*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm> //swap function


int _tmain(int argc, _TCHAR* argv[])
{
	
	// define quantity of names
	std::cout << "How many names do you wish to enter? ";
	int length;
	std::cin >> length;
	
	// create array of strings
	std::string *names = new(std::nothrow) std::string[length];
	if (!names)
	{
		std::cout << "Could not allocate memory\n";
	}
	
	// set all names
	for(int count = 0; count < length; ++count)
	{
		std::cout << "Enter name #" << count+1 <<": ";
		std::cin >> names[count];
	}
	std::cout << "\n";
	
	// sort names
	for(int startIndex = 0; startIndex < length-1 ; ++startIndex)
	{
		// assume that smallest element is the first element od this iteration
		int smallestIndex = startIndex;

		// look for smallest index in the rest of array
		for(int currentIndex = startIndex+1 ; currentIndex < length ; ++currentIndex)
		{		
			// if a smaller value was found, then keep track of it
			if (names[currentIndex] < names[smallestIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		// swap smallest value with the start element of array
		std::swap(names[startIndex], names[smallestIndex]);
	}

	// print sorted names
	std::cout << "Here is your sorted list\n";
	for(int count = 0; count < length; ++count)
	{
		std::cout << "Name #" << count+1 <<": " << names[count] << "\n";
	}

	delete[] names;
	names = 0;

	return 0;
}

