// Chapter4p5_Enumerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum class MonsterRace {
	ORC,
	GOBLIN,
	TROLL,
	OGRE,
	SKELETON
};

std::string printMonsterRace(MonsterRace monsterRace)
{
	if (monsterRace == MonsterRace::ORC)
		return std::string("Orc");
	if (monsterRace == MonsterRace::GOBLIN)
		return std::string("Goblin");
	if (monsterRace == MonsterRace::TROLL)
		return std::string("Troll");
	if (monsterRace == MonsterRace::OGRE)
		return std::string("Ogre");
	if (monsterRace == MonsterRace::SKELETON)
		return std::string("Skeleton");

	return std::string("??? Not Defined");
}

int main()
{
	MonsterRace monsterRace(MonsterRace::TROLL);

	std::cout << "The monster is a(n) " << printMonsterRace(monsterRace) <<"! \n";

    return 0;
}

