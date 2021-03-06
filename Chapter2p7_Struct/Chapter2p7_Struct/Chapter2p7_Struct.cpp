// Chapter2p7_Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

struct Advertising {
	int adsShown;
	float percAdsClicked;
	float earnPerAdClicked;
};

void printAdvertisement(Advertising ad) {
	
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Ads shown to readers: " << ad.adsShown << "\n";
	std::cout << "Percentage of ads clicked: " << ad.percAdsClicked << "\n";
	std::cout << "Average earning from each ad clicked: " << ad.earnPerAdClicked<< "\n";
	
	// calculate total earned
	float totalEarned = ad.adsShown * ad.earnPerAdClicked * ad.percAdsClicked;

	std::cout << "total earned: " << totalEarned << "\n";
	std::cout << "-----------------------------------------------------\n";
}


int main()
{
	Advertising ad;
	// get values from user
	std::cout << "Enter number of ads shown to readers: ";
	std::cin >> ad.adsShown;
	std::cout << "Enter number of percentage of ads clicked: ";
	std::cin >> ad.percAdsClicked;
	std::cout << "Enter number of average earning from each ad clicked: ";
	std::cin >> ad.earnPerAdClicked;

	printAdvertisement(ad);

    return 0;
}

