// Chapter5p5_While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	char letter('a');
	while(letter <= 'z')
	{
		std::cout << letter << "\t" << static_cast<int>(letter) << "\n";
		++letter;
	}
	return 0;
}

