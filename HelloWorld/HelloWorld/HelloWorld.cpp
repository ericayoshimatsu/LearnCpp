// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "io.h"


int main()
{

	std::cout << "Hello World!" << std::endl;
		
	// read first number
	int x = readNumber();

	// read second number
	int y = readNumber();
	
	// print number
	writeNumber(x + y);
    
	return 0;
}

