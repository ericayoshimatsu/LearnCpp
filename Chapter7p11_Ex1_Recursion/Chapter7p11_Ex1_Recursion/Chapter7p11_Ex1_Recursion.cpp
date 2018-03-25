// Chapter7p11_Ex1_Recursion.cpp : Defines the entry point for the console application.
//
/*
1) A factorial of an integer N (written N!) is defined as the product (multiplication) of all 
the numbers between 1 and N (0! = 1). Write a recursive function called factorial that returns 
the factorial of the input. Test it with the first 7 factorials.

Hint: Remember that x * y = y * x, so the product of all the numbers between 1 and N is the same 
as the product of all the numbers between N and 1.
*/

#include "stdafx.h"
#include <iostream>

int factorial(int n)
{
	if (n < 1)
		return 1;
	else
		return n * factorial(n-1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "===   FACTORIAL   ===\n";

	for (int ii = 0; ii < 10; ++ii)
		std::cout << "factorial (" << ii << "): " << factorial(ii) << "\n";

	return 0;
}

