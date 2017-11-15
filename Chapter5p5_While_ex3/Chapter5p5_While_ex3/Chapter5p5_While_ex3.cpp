// Chapter5p5_While_ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int outer = 1;
	while(outer <= 5)
	{
		int inner = 5;
		while (inner > 0)
		{
			if (inner > outer)
				std::cout << " ";
			else
				std::cout << inner;
			--inner;
		}
		std::cout << "\n";
		++outer;
	}
	return 0;
}

