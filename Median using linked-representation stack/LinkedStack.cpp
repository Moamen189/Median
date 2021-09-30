#include "LinkedStack.h"

template<class T>
LinkedStack<T>& LinkedStack<T>::Add(const T& x)
{
	// Add x to stack.
	SingleNode<T>* newNode = new SingleNode<T>;
	newNode->data = x;
	newNode->next = top;
	top = newNode;
	length++;
	return *this;
}




// a method that finds the Node Containing the second the median element of linked-repesentation stack 
template<class T>
T LinkedStack<T>::getMedian()
{
	// iterate over the middle
	SingleNode<T>* it = top;
	for (int i = 0; i < length / 2 - 1; i++) {
		it = it->next;
	}

	// calculate the median
	T med;
	if (length & 1)
		med = it->next->data;
	else
		med = (it->data + it->next->data) / 2;

	return med;
}

