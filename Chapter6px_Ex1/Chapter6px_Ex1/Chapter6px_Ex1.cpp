// Chapter6px_Ex1.cpp : Defines the entry point for the console application.
//
/* Quiz time

1) Pretend you’re writing a game where the player can hold 3 types of items: 
health potions, torches, and arrows. 
Create an enum to identify the different types of items, and a fixed array to store the 
number of each item the player is carrying (use built-in fixed arrays, not std::array). 
The player should start with 2 health potions, 5 torches, and 10 arrows. 
Write a function called countTotalItems() that returns how many items the player has in total. 
Have your main() function print the output of countTotalItems().

*/

#include "stdafx.h"
#include <iostream>
 
namespace Items
{
	enum Items 
	{
		HEALTH_POTION,
		TORCH,
		ARROW,
		MAX_ITEMS
	};
}

int countTotalItems(int *playerItems)
{
	int totalItems = 0;
	for (int count=0; count < Items::MAX_ITEMS; ++count)
	{
		totalItems += playerItems[count];
	}
	return totalItems;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// initialize player's items
	int playerItems[Items::MAX_ITEMS] = {2,5,10};
	
	// print total number of items that the player is carrying
	std::cout << countTotalItems(playerItems) << "\n";
	return 0;
}

