// Chapter6pX_Ex1_Items.cpp : Defines the entry point for the console application.
//
/*
1) Pretend you’re writing a game where the player can hold 3 types of items: health potions, torches, and arrows. 
Create an enum to identify the different types of items, and a fixed array to store the number of each item the
player is carrying (use built-in fixed arrays, not std::array). The player should start with 2 health potions,
5 torches, and 10 arrows. Write a function called countTotalItems() that returns how many items the player has in total. 
Have your main() function print the output of countTotalItems().
*/

#include "stdafx.h"
#include <iostream>


enum Item
{
	ITEM_POTION,
	ITEM_TORCH,
	ITEM_ARROW,
	MAX_ITEMS
};

int countTotalItems(int *bag)
{
	int totalItem = 0;
	for (int index = 0; index < MAX_ITEMS; ++index)
	{
		totalItem += bag[index];
	}

	return totalItem;
}

int main()
{
	int bag[MAX_ITEMS]{ 2,5,10 };
	/*
	int bag[MAX_ITEMS];
	bag[ITEM_POTION] = 2;
	bag[ITEM_TORCH] = 5;
	bag[ITEM_ARROW] = 10;
	*/

	std::cout << "The bag has " << countTotalItems(bag) << " items \n";

    return 0;
}

