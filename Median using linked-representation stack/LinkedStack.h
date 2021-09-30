#pragma once
// linked stack
#ifndef LinkedStack_
#define LinkedStack_

#include <iostream>
#include "LinkedStack.h"
#include "LinkedStack.cpp"

template<class T>
class LinkedStack
{
public:


	// basic operations

	LinkedStack<T>& Add(const T& x);

	T getMedian();

private:
	SingleNode<T>* top; // pointer to top node
	int length;
};

#endif;
