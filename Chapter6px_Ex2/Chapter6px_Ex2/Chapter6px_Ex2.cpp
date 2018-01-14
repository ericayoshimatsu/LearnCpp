// Chapter6px_Ex2.cpp : Defines the entry point for the console application.
//
/*2) Write the following program: Create a struct that holds a student’s name and grade (on a scale of 0-100). 
Ask the user how many students they want to enter. Dynamically allocate an array to hold all of the students. 
Then prompt the user for each name and grade. Once the user has entered all the names and grades, sort the list 
by grade (highest first). Then print all the names and grades in sorted order.

For the following input:

Joe
82
Terry
73
Ralph
4
Alex
94
Mark
88
The output should look like this:

Alex got a grade of 94
Mark got a grade of 88
Joe got a grade of 82
Terry got a grade of 73
Ralph got a grade of 4

Hint: You can modify the selection sort algorithm from lesson 6.4 -- Sorting an array using selection sort 
to sort your dynamic array. If you put this inside its own function, the array should be passed by address (as a pointer).
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

struct Student
{
	std::string name;
	int grade;
};

// sort Names by descending grade 
void sortNames(Student *students, int length)
{
	for (int startIndex = 0; startIndex < length -1; ++startIndex)
	{
		int greatertIndex = startIndex;
		for (int currentIndex = startIndex; currentIndex < length; ++currentIndex)
		{
			if (students[currentIndex].grade > students[greatertIndex].grade)
				std::swap(students[currentIndex].grade, students[greatertIndex].grade);
		}
	}
}

// print students name and grade
void printSummary (Student *students, int length)
{
	for (int count = 0; count < length; ++count)
	{
		std::cout << students[count].name << " got a grade of " << students[count].grade << "\n";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	// get number of students
	std::cout << "How many students do you want to register? ";
	int numStudents;
	std::cin >> numStudents;

	// create dynamic array
	Student *students = new Student[numStudents]; 

	// get name and grade for each student
	for (int count = 0; count < numStudents; ++count)
	{
		std::cout << "Enter name of student: ";
		std::cin >> students[count].name;
		std::cout << "Enter student's grade: ";
		std::cin >> students[count].grade;
	}

	// sort by descending grade
	sortNames(students, numStudents);

	// print names and grade
	printSummary(students, numStudents);

	// deallocate memory
	delete[] students;
	students = 0;

	return 0;
}

