// Chapter6p3_arrayLoop_maxIndex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxScore = 0;
	int maxIndex = 0;

	for (int student = 0; student < numStudents; ++student)
	{
		if (scores[student] > maxScore)
		{
			maxScore = scores[student];
			maxIndex = student;
		}
	}
	
	std::cout << "The best score was: " << maxScore << "\n";
	std::cout << "The index of best score was: " << maxIndex << "\n";
	

	return 0;
}

