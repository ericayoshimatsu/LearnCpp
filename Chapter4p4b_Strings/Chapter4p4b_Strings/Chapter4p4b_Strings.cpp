// Chapter4p4b_Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>



int main()
{
	std::string myName;
	std::cout << "Enter your name: ";
	std::getline(std::cin, myName);

	std::cout << "Your name is: " << myName << "\n";

    return 0;
}

