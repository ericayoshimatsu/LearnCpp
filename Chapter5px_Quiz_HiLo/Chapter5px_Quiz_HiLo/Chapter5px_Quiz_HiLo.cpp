// Chapter5px_Quiz_HiLo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> //for random functions
#include <ctime> //for time function

int getUserGuess()
{
	int guessedNumber;

	while (true)
	{
		std::cin >> guessedNumber;
		
		if (std::cin.fail()) //handle invalid input
		{
			std::cin.clear(); //clear error flag
			std::cin.ignore(32767, '\n'); //remove invalid input
			std::cout << "Invalid input. Enter an integer number: ";
		}
		else
		{
			std::cin.ignore(32767, '\n');  // clear (up to 32767) characters out of the buffer until a '\n' character is removed
			return guessedNumber;
		}
	}
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

bool tryAgain()
{
	char answer(' ');
	
	while ( (answer != 'y') && (answer != 'Y') && (answer != 'n') && (answer != 'N') )
	{
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> answer;
	}
	switch(answer)
	{
		case 'y':
		case 'Y':
			std::cout << "Let's try again!\n\n";
			return true;
		case 'n':
		case 'N':
			std::cout << "Game Over \nThank you for playing \n\n";
			return false;
	}
}




// play the game and verifies if user won or lost
bool playGame(int MAX_GUESSES, int targetNumber)
{
	for(int guesses=1; guesses <=MAX_GUESSES; ++guesses)
	{
		std::cout << "Guess number #" << guesses << ": ";
		int userGuess = getUserGuess();

		if (userGuess == targetNumber)
			return true;
		else if (userGuess>targetNumber)
			std::cout << "Your guess is too high.\n";
		else
			std::cout << "Your guess is too low.\n";
	}
		return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	srand(static_cast<unsigned int>(time(0)));
	rand(); // discart first random number due to Visual Studio Issue
	
	const int MAX_GUESSES(7); // maximal number of gueeses before game over

	do
	{
		std::cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is.\n";
		int targetNumber = getRandomNumber(1,100);
		std::cout << "For debugging. Target number is: " << targetNumber << "\n";

		bool won = playGame(MAX_GUESSES,targetNumber);
		
		if (won)
			std::cout << "Correct! You win!\n";
		else
			std::cout << "Sorry, you lose.  The correct number was " << targetNumber <<".\n";

	}
	while(tryAgain());

	return 0;
}

