// Chapter4p6_typeDef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// typedef int error_t;
using error_t = int;

error_t printData();

int main()
{
	error_t temp = printData();
	std::cout << "Returned " << temp << "\n";
    return 0;
}

error_t printData() {
	std::cout << "Print \n";
	return 0;
}
