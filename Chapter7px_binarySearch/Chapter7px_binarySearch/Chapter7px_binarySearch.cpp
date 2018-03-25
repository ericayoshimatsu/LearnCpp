// Chapter7px_binarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// array is the array to search over.
// target is the value we're trying to determine exists or not.
// min is the index of the lower bounds of the array we're searching.
// max is the index of the upper bounds of the array we're searching.
// binarySearch() should return the index of the target element if the target is found, -1 otherwise
int binarySearch(int *array, int target, int min, int max)
{
	while (min <= max)
	{
		// calculate midpoint
		int mid = (min + max) / 2;
		
		// target is in lower array
		if (target < array[mid])
			max = mid - 1;
		// target is in upper array
		else if (target > array[mid])
			min = mid + 1;
		// found target
		else
			return mid;
	}
	//target not found
	return -1;
}

int binarySearchRec(int *array, int target, int min, int max)
{
	// termination condition
	if ( min > max )
		return -1;

	// calculate midpoint
	int mid = (min + max) / 2;
	
	// search target in lower array
	if (target < array[mid])
		binarySearchRec(array, target, min, max-1);
	// search target in upper array
	else if (target > array[mid])
		binarySearchRec(array, target, min+1, max);
	// found target
	else
		return mid;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int array[] = { 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
 
    // We're going to test a bunch of values to see if they produce the expected results
    const int numTestValues = 9;

    // Here are the test values
    int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };

    // And here are the expected results for each value
    int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };
 
    // Loop through all of the test values
    for (int count=0; count < numTestValues; ++count)
    {
        // See if our test value is in the array
        int index = binarySearchRec(array, testValues[count], 0, 14);

        // If it matches our expected value, then great!
        if (index == expectedValues[count])
             std::cout << "test value " << testValues[count] << " passed!\n";
        else // otherwise, our binarySearch() function must be broken
             std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
    }
 
    return 0;
}

