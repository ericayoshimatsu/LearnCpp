// Chapter6p2_arrays_enum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace Animal
{
	enum Animal
	{
		 CHICKEN,
		 DOG,
		 CAT,
		 ELEPHANT,
		 DUCK,
		 SNAKE,
		 MAX_ANIMALS
	};
}


int _tmain(int argc, _TCHAR* argv[])
{
	int animalLegs[Animal::MAX_ANIMALS] = {2, 4, 4, 4, 2, 0};

	std::cout << "An elephant has " << animalLegs[Animal::ELEPHANT] << " legs.\n";
	return 0;
}

