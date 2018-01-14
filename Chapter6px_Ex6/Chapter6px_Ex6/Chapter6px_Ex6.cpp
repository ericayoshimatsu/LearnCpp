// Chapter6px_Ex6.cpp : Defines the entry point for the console application.
//
/* 6) Let’s pretend we’re writing a card game.

6a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). 
Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) 
and suits (clubs, diamonds, hearts, spades).

6b) Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

6c) Create a printCard() function that takes a const Card reference as a parameter and prints the card rank 
and value as a 2-letter code (e.g. the jack of spades would print as JS).

6d) A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, 
and initialize it with one of each card.

Hint: Use static_cast if you need to convert an integer into an enumerated type.

6e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the values 
in the deck. Use a for-each loop.

6f) Write a swapCard function that takes two Cards and swaps their values.

6g) Write a function to shuffle the deck of cards called shuffleDeck(). To do this, use a for loop to step through 
each element of your array. Pick a random number between 1 and 52, and call swapCard with the current card and the 
card picked at random. Update your main function to shuffle the deck and print out the shuffled deck.

Hint: Review lesson 5.9 -- Random number generation for help with random numbers.
Hint: Don’t forget to call srand() at the top of your main function.
Hint: If you’re using Visual Studio, don’t forget to call rand() once before using rand.

6h) Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen, 
or king is worth 10. Assume an Ace is worth 11).
*/

#include "stdafx.h"
#include <iostream>
#include <array>
// 6a)
namespace Label
{
	enum Suit
	{
		ACE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		JACK,
		QUEEN,
		KING,
		MAX_SUIT
	};

	enum Rank
	{
		CLUB,
		DIAMOND,
		HEART,
		SPADE,
		MAX_RANK
	};
}

// 6b)
struct Card
{
	Label::Rank rank;
	Label::Suit suit;
};

// 6c)
void printCard(const Card &currCard)
{
	// print suit
	switch(currCard.suit)
	{
	case Label::ACE :		std::cout << "A";		break;
	case Label::JACK :		std::cout << "J";		break;
	case Label::QUEEN :		std::cout << "Q";		break;
	case Label::KING :		std::cout << "K";		break;
	default :
		std::cout << currCard.suit + 1;
		break;
	}

	// print rank
	switch(currCard.rank)
	{
	case Label::CLUB :		std::cout << "C";		break;
	case Label::DIAMOND :	std::cout << "D";		break;
	case Label::HEART :		std::cout << "H";		break;
	case Label::SPADE :		std::cout << "S";		break;
	}
}

// 6e)
void printDeck(const std::array<Card,52> &deck)
{
	for (Card card : deck)
	{
		printCard(card);
		std::cout << "\n";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::array<Card, 52> deck;
	for (int numRank = 0; numRank < Label::MAX_RANK; ++numRank)
	{
		for (int numSuit = 0; numSuit < Label::MAX_SUIT; ++numSuit)
		{
			int index = numRank *Label::MAX_SUIT + numSuit;
			deck[index].rank = static_cast<Label::Rank>(numRank);
			deck[index].suit = static_cast<Label::Suit>(numSuit);
		}
	}

	printDeck(deck);

	return 0;
}

