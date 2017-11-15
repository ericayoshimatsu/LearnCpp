// Chapter5p7_ForLoop_sumTo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int sumTo(int num)
{
	int result=0;
	for( ; num > 0; --num)
		result += num;

	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int num = sumTo(6);
	std::cout << num << "\n";

	return 0;
}

