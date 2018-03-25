// Chapter7p11_Ex2_Recursion.cpp : Defines the entry point for the console application.
//
/*
2) Write a recursive function that takes an integer as input and returns the sum of all
the numbers in the integer (e.g. 357 = 15). Print the answer for input 93427 (which is 25).
*/

#include "stdafx.h"
#include <iostream>

int sumNum (int n)
{
	if ( n < 1 )
		return 0;
	else
		return n%10 + sumNum(n/10) ;
}

void printSumNum(int num){
	std::cout << num << ": \t" << sumNum(num) << "\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "===   Sum all numbers from integer   ===\n";
	
	printSumNum(357);
	printSumNum(93427);
	
	return 0;
}

