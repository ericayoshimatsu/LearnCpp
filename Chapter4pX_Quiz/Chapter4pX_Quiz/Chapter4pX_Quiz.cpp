// Chapter4pX_Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

// enumerate monster types
enum class MonsterType {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

// define monster struct
struct Monster {
	MonsterType type;
	std::string name;
	int health;
};

// get monster type string
std::string getMonsterTypeString(Monster monster) {
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::DRAGON)
		return "Dragon";
	if (monster.type == MonsterType::ORC)
		return "Orc";
	if (monster.type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterType::SLIME)
		return "Slime";
}


// print monster status
void printMonster(Monster monster) {
	
	std::cout << "This " << getMonsterTypeString(monster) << " is named " << \
		monster.name << " and has " << monster.health << " health. \n";
}

int main()
{
	// initalize monsters
	Monster ogre{ MonsterType::OGRE, "Torg", 145 };
	Monster slime{ MonsterType::SLIME, "Blurp", 23 };

	// print stats
	printMonster(ogre);
	printMonster(slime);

    return 0;
}

