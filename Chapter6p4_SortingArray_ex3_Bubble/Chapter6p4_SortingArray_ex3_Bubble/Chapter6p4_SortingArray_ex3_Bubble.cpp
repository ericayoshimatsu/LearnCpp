// Chapter6p4_SortingArray_ex3_Bubble.cpp : Defines the entry point for the console application.
/* 3) This one is going to be difficult, so put your game face on.

Another simple sort is called “bubble sort”. Bubble sort works by comparing adjacent pairs of elements, and swapping them if the criteria is met, so that elements “bubble” to the end of the array. 
Although there are quite a few ways to optimize bubble sort, in this quiz we’ll stick with the unoptimized version here because it’s simplest.

Unoptimized bubble sort performs the following steps to sort an array from smallest to largest:
A) Compare array element 0 with array element 1. If element 0 is larger, swap it with element 1.
B) Now do the same for elements 1 and 2, and every subsequent pair of elements until you hit the end of the array. At this point, the last element in the array will be sorted.
C) Repeat the first two steps again until the array is sorted.

Write code that bubble sorts the following array according to the rules above:


Print the sorted array elements at the end of your program.

Hint: If we’re able to sort one element per iteration, that means we’ll need to iterate as many times as there are numbers in our array to guarantee that the whole array is sorted.
Hint: When comparing pairs of elements, be careful of your array’s range.
*/

/*
4) Add two optimizations to the bubble sort algorithm you wrote in the previous quiz question:

Notice how with each iteration of bubble sort, the biggest number remaining gets bubbled to the end of the array. 
After the first iteration, the last array element is sorted. After the second iteration, the second to last array element is sorted too. 
And so on… With each iteration, we don’t need to recheck elements that we know are already sorted. 
Change your loop to not re-check elements that are already sorted.
If we go through an entire iteration without doing a swap, then we know the array must already be sorted. 
Implement a check to determine whether any swaps were made this iteration, and if not, terminate the loop early. 
If the loop was terminated early, print on which iteration the sort ended early.
Your output should match this:

Early termination on iteration 6
1 2 3 4 5 6 7 8 9
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>


int _tmain(int argc, _TCHAR* argv[])
{
	const int length(9);
	int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	

	// bubble sort

	int outer = 0;
	do
	{
		bool swap = false; // check if swap is necessary

		// not re-check elements that are already sorted (last ones)
		for (int inner = 0; inner < (length - outer - 1); ++inner)
		{			
			if (array[inner] > array[inner+1])
			{
				std::swap( array[inner], array[inner+1]);
				swap = true;
			}
		}
		++outer;

		if (!swap)
		{
			std::cout << "Early termination on iteration " << outer << "\n";
			break;
		}
		
	}
	while ( outer < length );

	// print sorted array
	for ( int index = 0; index < length; ++index )
		std::cout<<array[index];
	
	std::cout << "\n";
	return 0;
}

