// Chapter4p4b_Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>



int main()
{
	std::string fullName;
	std::cout << "Enter your full name: ";
	std::getline(std::cin, fullName);

	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	//remove extra newline from strem
	std::cin.ignore(30000, '\n'); 

	std::cout << "Your name is: " << fullName << "\n";
	std::cout << "Your age is: " << age << "\n";

	float yearsPerLetter = static_cast<double>(age) / fullName.length();

	std::cout << "You've lived " << yearsPerLetter << " years for each letter in your name \n";


    return 0;
}

