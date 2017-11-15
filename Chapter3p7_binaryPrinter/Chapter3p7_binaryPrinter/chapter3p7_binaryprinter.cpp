// binaryPrinter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
 
    return result;
}

int printBinary (int x, int exp){
	int y = x;
	int p = pow(2,exp);

	if (x >= p)
		{
		std::cout << "1";
		y = x - p ;
		}
	else
		{
		std::cout << "0" ;
		}
		
	return y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x;

	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> x;
	
	x = printBinary(x,7);
	x = printBinary(x,6);
	x = printBinary(x,5);
	x = printBinary(x,4);
	x = printBinary(x,3);
	x = printBinary(x,2);
	x = printBinary(x,1);
	x = printBinary(x,0);

	//x = printBinary(x,3);
	
	std::cout << std::endl;
	
	return 0;
}

