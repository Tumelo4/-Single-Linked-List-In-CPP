// CREATION OF SINGLE LINKED LIST
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"


class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	int size();
	void prepend(int);
	void indexInsertion(int, int);
	void append(int);
	friend ostream& operator<<(ostream &, LinkedList&);
	void reverse();
private:
	// Private member variable called head
	// An instance of Node class
	Node* head;
	
};

#endif