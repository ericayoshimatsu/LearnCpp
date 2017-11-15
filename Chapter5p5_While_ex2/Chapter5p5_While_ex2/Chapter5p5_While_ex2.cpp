// Chapter5p5_While_ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int outer = 5;
	while(outer > 0)
	{
		int inner = outer;
		while (inner > 0)
		{
			std::cout << inner;
			--inner;
		}
		std::cout << "\n";
		--outer;
	}
	return 0;
}

