// Chapter5p7_ForLoop_ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	for(int count=0; count <= 20; count+=2)
		std::cout << count << " ";

	std::cout << "\n";
	return 0;
}

