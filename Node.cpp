#include "Node.h"

//Constructor to initialize data
Node::Node(int data)
{
	this->data = data;
	next = NULL;
} 

// return private variable data
int Node::getData()
{
	return data;
}
