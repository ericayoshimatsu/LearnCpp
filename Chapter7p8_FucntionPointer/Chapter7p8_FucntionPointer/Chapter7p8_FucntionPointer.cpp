// Chapter7p8_FucntionPointer.cpp : Defines the entry point for the console application.
//
/*
1) In this quiz, we’re going to write a version of our basic calculator using function pointers.


1a) Create a short program asking the user for two integer inputs and a mathematical operation 
(‘+’, ‘-‘, ‘*’, ‘/’). Ensure the user enters a valid operation.

1b) Write functions named add(), subtract(), multiply(), and divide(). These should take two 
integer parameters and return an integer.


1c) Create a typedef named arithmeticFcn for a pointer to a function that takes two integer 
parameters and returns an integer.


1d) Write a function named getArithmeticFunction() that takes an operator character and returns
the appropriate function as a function pointer.


1e) Modify your main() function to call getArithmeticFunction(). Call the return value from that 
function with your inputs and print the result.



2) Now let’s modify the program we wrote in quiz 1 to move the logic out of the getArithmeticFcn 
and into an array.

2a) Create a struct named arithmeticStruct that has two members: a mathematical operator char, and 
an arithmeticFcn function pointer.

2b) Create a static global array of arithmeticStruct named arithmeticArray, initialized with each 
of the four arithmetic functions.

2c) Modify getArithmeticFcn to loop through the array and return the appropriate function pointer.

*/

#include "stdafx.h"
#include <iostream>

typedef int (*arithmeticFunction)(int, int);

int getInt()
{
	// get int value from user
	while(true)
	{
		std::cout << "Enter an integer value: ";
		int x;
		std::cin >> x;
		// check for failed extraction
		if(std::cin.fail())
		{
			// handle failure
			std::cin.clear();
			std::cin.ignore(32767,'\n'); // remove bad input
			std::cout << "Invalid input. Try again.\n";
		}
		else
		{
			std::cin.ignore(32767,'\n'); // remove extra input
			return x;
		}
	}
}

char getOp()
{
	// get operation from user
	while(true)
	{
		std::cout << "Enter one of the following: +, -, * or /:";
		char op;
		std::cin >> op;
		// Chars can accept any single input character, 
		// so no need to check for an invalid extraction here

		std::cin.ignore(32767,'\n'); // remove extra input
		// check if char is valid
		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			std::cout << "Invalid input. Try again.\n";
	}
}

void printResult(int n1, char op, int n2)
{
	switch(op)
	{
	case('+'): 
		std::cout << n1 << " + " << n2 << " is " << n1 + n2 << '\n'; 
		break;
	case('-'): 
		std::cout << n1 << " - " << n2 << " is " << n1 - n2 << '\n';	
		break;
	case('*'): 
		std::cout << n1 << " * " << n2 << " is " << n1 * n2 << '\n'; 
		break;
	case('/'): 
		std::cout << n1 << " / " << n2 << " is " << n1 / n2 << '\n'; 
		break;
	default:   
		std::cout << "Error"; 
		break;
	}
}
int add(int n1, int n2)
{
	return n1 + n2;
}
int subtract(int n1, int n2)
{
	return n1 - n2;
}
int multiply (int n1, int n2)
{
	return n1 * n2;
}
int divide(int n1, int n2)
{
	return n1 / n2;
}

arithmeticFunction getArithmeticFunction(char op)
{
	switch(op)
	{
	case '+':	return add;
	case '-':	return subtract;
	case '*':	return multiply;
	case '/':	return divide;
	}
}
struct arithmeticStruct
{
	char op;
	arithmeticFunction fcnPtr;
};
static arithmeticStruct arithmeticArray[4] = {{'+',add},{'-',subtract},{'*',multiply},{'/',divide}};

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "===      CALCULATOR      ===\n\n";
	
	int n1 = getInt();
	//std::cout << "You've entered: " << n1 <<"\n";

	char op = getOp();
	//std::cout << "You've entered: " << op <<"\n";

	int n2 = getInt();
	//std::cout << "You've entered: " << n2 <<"\n";

	printResult(n1, op, n2);
	
	arithmeticFunction fcnPtr = getArithmeticFunction(op);
	std::cout << n1 << " " << op << " " << n2 << " is " << fcnPtr(n1,n2) << '\n'; 
	
	std::cout << "\n===         END          ===\n";
	return 0;
}

