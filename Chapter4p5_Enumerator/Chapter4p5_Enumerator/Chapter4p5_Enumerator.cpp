// Chapter4p5_Enumerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum MonsterRace {
	MONSTERRACE_ORC,
	MONSTERRACE_GOBLIN,
	MONSTERRACE_TROLL,
	MONSTERRACE_OGRE,
	MONSTERRACE_SKELETON
};

std::string printMonsterRace(MonsterRace monsterRace)
{
	if (monsterRace == MONSTERRACE_ORC)
		return std::string("Orc");
	if (monsterRace == MONSTERRACE_GOBLIN)
		return std::string("Goblin");
	if (monsterRace == MONSTERRACE_TROLL)
		return std::string("Troll");
	if (monsterRace == MONSTERRACE_OGRE)
		return std::string("Ogre");
	if (monsterRace == MONSTERRACE_SKELETON)
		return std::string("Skeleton");

	return std::string("??? Not Defined");
}

int main()
{
	MonsterRace monsterRace(MONSTERRACE_TROLL);

	std::cout << "The monster is a(n) " << printMonsterRace(monsterRace) <<"! \n";

    return 0;
}

