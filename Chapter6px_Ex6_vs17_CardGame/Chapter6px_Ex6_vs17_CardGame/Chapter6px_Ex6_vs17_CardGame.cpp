// Chapter6px_Ex6_vs17_CardGame.cpp : Defines the entry point for the console application.
//
/*
6) Let’s pretend we’re writing a card game.

6a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). Create enumerations for the card ranks 
(2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).


6b) Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.


6c) Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and
value as a 2-letter code (e.g. the jack of spades would print as JS).


6d) A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and
initialize it with one of each card.

Hint: Use static_cast if you need to convert an integer into an enumerated type.


6e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the
values in the deck. Use a for-each loop.


6f) Write a swapCard function that takes two Cards and swaps their values.


6g) Write a function to shuffle the deck of cards called shuffleDeck(). To do this, use a for loop to step 
through each element of your array. Pick a random number between 1 and 52, and call swapCard with the current 
card and the card picked at random. Update your main function to shuffle the deck and print out the shuffled deck.

Hint: Review lesson 5.9 -- Random number generation for help with random numbers.
Hint: Don’t forget to call srand() at the top of your main function.
Hint: If you’re using Visual Studio, don’t forget to call rand() once before using rand.

6h) Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen,
or king is worth 10. Assume an Ace is worth 11).
*/


#include "stdafx.h"
#include <iostream>
#include <array>
#include <utility> // needed for swap function

// Define card's ranks and suits
namespace CARD 
{
	enum RANK 
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
		MAX_RANK,
	};

	enum SUIT 
	{
		CLUBS,
		DIAMONDS,
		HEARTS,
		SPADES,
		MAX_SUITE,
	};
}

struct Card
{
	CARD::RANK rank;
	CARD::SUIT suit;
};

void printCard(const Card &card)
{
	switch (card.rank)
	{
	case CARD::ACE:		std::cout << "A"; break;
	case CARD::TWO:		std::cout << "2"; break;
	case CARD::THREE:	std::cout << "3"; break;
	case CARD::FOUR:	std::cout << "4"; break;
	case CARD::FIVE:	std::cout << "5"; break;
	case CARD::SIX:		std::cout << "6"; break;
	case CARD::SEVEN:	std::cout << "7"; break;
	case CARD::EIGHT:	std::cout << "8"; break;
	case CARD::NINE:	std::cout << "9"; break;
	case CARD::TEN:		std::cout << "T"; break;
	case CARD::JACK:	std::cout << "J"; break;
	case CARD::QUEEN:	std::cout << "Q"; break;
	case CARD::KING:	std::cout << "K"; break;
	}

	switch (card.suit)
	{
	case CARD::CLUBS:		std::cout << "C"; break;
	case CARD::DIAMONDS:	std::cout << "D"; break;
	case CARD::HEARTS:		std::cout << "H"; break;
	case CARD::SPADES:		std::cout << "S"; break;
	}

	std::cout << "\n";

}

void printDeck(const std::array<Card, 52> &deck)
{
	for (const auto &card : deck)
		printCard(card);
}

void swapCard(int idx1, int idx2, std::array<Card, 52> &deck)
{
	std::swap(deck[idx1], deck[idx2]);
}

int main()
{
	std::array <Card, 52> deck;

	int nCard = 0;
	for(int s = 0; s < CARD::MAX_SUITE; ++s)
	{
		for (int r = 0; r < CARD::MAX_RANK; ++r)
		{
			deck[nCard].rank = static_cast<CARD::RANK>(r);
			deck[nCard].suit = static_cast<CARD::SUIT>(s);
			++nCard;
		}
	}

	printDeck(deck);

	swapCard(50, 51, deck);

	printDeck(deck);

    return 0;
}

