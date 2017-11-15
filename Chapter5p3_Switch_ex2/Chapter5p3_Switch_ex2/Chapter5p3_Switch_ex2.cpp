// Chapter5p3_Switch_ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum Animal
{
	ANIMAL_PIG,
	ANIMAL_CHICKEN,
	ANIMAL_GOAT,
	ANIMAL_CAT,
	ANIMAL_DOG,
	ANIMAL_OSTRICH
};

std::string getAnimalName(Animal animal)
{
	switch(animal)
	{
		case ANIMAL_PIG:
			return std::string("pig");
		case ANIMAL_CHICKEN:
			return std::string("chicken");
		case ANIMAL_GOAT:
			return std::string("goat");
		case ANIMAL_CAT:
			return std::string("cat");
		case ANIMAL_DOG:
			return std::string("dog");
		case ANIMAL_OSTRICH:
			return std::string("ostrich");
		default:
			return std::string("undefined");
	}
}

void printNumberOfLegs(Animal animal)
{
	std::cout << "A " << getAnimalName(animal) << " has ";

	switch(animal)
	{
		case ANIMAL_PIG:
		case ANIMAL_DOG:
		case ANIMAL_GOAT:
		case ANIMAL_CAT:
			std::cout << 4 ;
			break;
		case ANIMAL_CHICKEN:
		case ANIMAL_OSTRICH:
			std::cout << 2;
			break;
		default:
			std::cout << "Animal not defined \n";
			break;
	}
	std::cout << " legs. \n"; 
}

int _tmain(int argc, _TCHAR* argv[])
{
	printNumberOfLegs(ANIMAL_CAT);
	printNumberOfLegs(ANIMAL_CHICKEN);
	return 0;
}

