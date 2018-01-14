// Chapter6p4_SortingArray_descending.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	const int length = 5;
	int array[length] = {30, 50, 20, 10,40};
	
	
	for(int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		// keep track of greatest element index in the remaining array
		int greaterIndex = startIndex;

		// look for the remaining array
		for (int currentIndex = startIndex; currentIndex < length; ++currentIndex)
		{
			// if a greater value is found, then keep track of its index
			if ( array[currentIndex] > array[greaterIndex] )
				greaterIndex = currentIndex;
		}
		// swap greater value with the startIndex
		std::swap(array[greaterIndex],array[startIndex]);

	}


	// print sorted array
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';

	return 0;
}

