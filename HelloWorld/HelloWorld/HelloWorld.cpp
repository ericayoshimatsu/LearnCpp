// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int readNumber()
{
	std::cout << "Please enter a number: ";
	int x;
	std::cin >> x;
	return x;
}

void writeNumber(int x)
{
	std::cout << "The sum is: " << x << std::endl;
}

int main()
{

	std::cout << "Hello World!" << std::endl;
		
	// read first number
	int x = readNumber();

	// read second number
	int y = readNumber();
	
	// print number
	writeNumber(x+y);
    
	return 0;
}

