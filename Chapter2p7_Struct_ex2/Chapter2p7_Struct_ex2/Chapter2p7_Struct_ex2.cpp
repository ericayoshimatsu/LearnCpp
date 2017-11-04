// Chapter2p7_Struct_ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

struct Fraction {
	int numerator;
	int denominator;
};

void printFraction(Fraction frac) {
	std::cout << "Fraction is " << frac.numerator << "\\" << frac.denominator << "\n";
}

int main()
{
	Fraction fraction1;
	Fraction fraction2;

	// get values from user
	std::cout << "Enter first fraction numerator: ";
	std::cin >> fraction1.numerator;
	std::cout << "Enter first fraction denominator: ";
	std::cin >> fraction1.denominator;

	printFraction(fraction1);

	std::cout << "Enter second fraction numerator: ";
	std::cin >> fraction2.numerator;
	std::cout << "Enter second fraction denominator: ";
	std::cin >> fraction2.denominator;

	printFraction(fraction2);

	// calculate fraction multiplication
	Fraction multResult;
	multResult.numerator = fraction1.numerator * fraction2.numerator;
	multResult.denominator = fraction1.denominator * fraction2.denominator;

	std::cout << "Muliplication ";
	printFraction(multResult);



    return 0;
}

