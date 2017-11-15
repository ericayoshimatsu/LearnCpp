// Chapter5p3_Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int calculate(int n1, char op, int n2)
{
	int result;

	switch(op)
	{
		case '+':
			return n1+n2;
		case '-':
			return n1-n2;
		case '*':
			return n1*n2;
		case '/':
			return n1/n2;
		case '%':
			return n1%n2;
		default:
			std::cout << "Invalid operator passed! \n";
			return = 0;		
	}

	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Answer is: " << calculate(1,'+',2) << "\n";
	std::cout << "Answer is: " << calculate(1,'-',2) << "\n";
	std::cout << "Answer is: " << calculate(1,'*',2) << "\n";
	std::cout << "Answer is: " << calculate(1,'/',2) << "\n";
	std::cout << "Answer is: " << calculate(1,'%',2) << "\n";
	std::cout << "Answer is: " << calculate(1,'q',2) << "\n";

	return 0;
}

