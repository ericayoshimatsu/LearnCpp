// Chapter8p9_Class_Date.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Date
{
private:
	int m_year;

public:
	Date(int year)
	{
		setDate(year);
	}

	void setDate(int year)
	{
		m_year = year;
	}

	int getDate()
	{
		return m_year;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Date teste(2017);
	std::cout << "ano: " << teste.getDate() <<"\n";
	teste.setDate(2018);
	std::cout << "ano: " << teste.getDate() <<"\n";

	return 0;
}

