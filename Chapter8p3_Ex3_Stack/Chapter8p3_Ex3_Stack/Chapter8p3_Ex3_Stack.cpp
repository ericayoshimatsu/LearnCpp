// Chapter8p3_Ex3_Stack.cpp : Defines the entry point for the console application.
//
/*
3) Now let’s try something a little more complex. Let’s write a class that implements a simple stack from scratch. Review lesson 7.9 -- The stack and the heap if you need a refresher on a what a stack is.

The class should be named Stack, and should contain:
* A private fixed array of integers of length 10.
* A private integer to keep track of the length of the stack.
* A public member function named reset() that sets the length to 0 and all of the element values to 0.
* A public member function named push() that pushes a value on the stack. push() should return false if the array is already full, and true otherwise.
* A public member function named pop() that pops a value off the stack and returns it. If there are no values on the stack, it should assert out.
* A public member function named print() that prints all the values in the stack.

Make sure the following program executes correctly:

int main()
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;
}
This should print:

( )
( 5 3 8 )
( 5 3 )
( )
*/

#include "stdafx.h"
#include <iostream>
#include <cassert>

class Stack
{
private:
	int m_array[10];
	int m_next;

public:
	void reset()
	{
		m_next = 0;
		for (int ii = 0; ii < 10; ++ii)
			m_array[ii] = 0;
	}
	
	bool push(int value)
	{
		if (m_next >= 10) 
			return false;
		else 
		{
			m_array[m_next] = value;
			++m_next;
			return true;
		}
	}

	int pop()
	{
		assert(m_next > 0);
		/*if (m_next <= 0)
			return 0;
		else
		{*/
		--m_next;
		return m_array[m_next];
		//}
			
	}

	void print()
	{
		std::cout << "(";
		for (int ii = 0; ii < m_next; ++ii)
			std::cout << m_array[ii];
		std::cout << ")\n";
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);

	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
	 
	return 0;
}

