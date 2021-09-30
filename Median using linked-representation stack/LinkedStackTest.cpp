#include "LinkedStack.h"
#include "LinkedStack.cpp"
#include <iostream>

using namespace std;

void stackTest() {
	LinkedStack<int> stack;
	

	// Add
	stack.Add(1);
	stack.Add(2);
	stack.Add(3);
	stack.Add(4);
	stack.Add(5);

	// Math   
	cout << " Median= " << stack.getMedian();  "\n";

}

// Input :add 1
// add 2
//add 3
// add 4
//add 5

// output 
// Medain = 3 