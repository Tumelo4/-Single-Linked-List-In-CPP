#include "LinkedList.h"

// default Constructor 
// set head to null;
LinkedList::LinkedList()
{
	head = NULL;
}

// destructor
LinkedList::~LinkedList()
{
	while(head)
	{
		Node* tmp = head;
		head = head->next;
		delete tmp;
		tmp = NULL;
	}
}

// return the size of linked
int LinkedList::size()
{
	int count = 0;
	for(Node* curr = head; curr != NULL; count++, curr = curr->next);
	return count;
}


// add data at the beginning of linked using data that is pass as argument
void LinkedList::prepend(int data)
{
	// check if link is empty
	if(!head)
	{
		head = new Node(data);
	}
	else
	{
		Node* node = new Node(data);
		node->next = head;
		head = node;
	}
}

// add data according to argument index	
void LinkedList::indexInsertion(int data, int index)
{
	if (index == 0)
	{
		this->prepend(data);
	}
	else if ( index == size())
	{
		this->append(data);
	}
	else
	{
		int count = 0;
		Node* curr = head;
		Node* prev = NULL;
		for(;count != index; count++, prev = curr, curr=curr->next);
		Node* newNode = new Node(data);
		newNode->next = curr;
		prev->next = newNode;
	}
}

// add data at the end of link
void LinkedList::append(int data)
{
	// check if head is null
	if(!head)
	{
		head = new Node(data);
	}
	else
	{
		Node* curr = head;
		for(;curr->next != NULL; curr = curr->next);
		curr->next = new Node(data);
	}
}

// override ostream	
ostream& operator<<(ostream &os, LinkedList&obj)
{
	for(Node* curr = obj.head; curr != NULL; curr=curr->next)
	{

		if(curr->next == NULL)
		{
			os<<curr->getData();
		}
		else
		{
			os<<curr->getData()<<",";
		}
	}
	return os;
}



// reverse the link using O(n)
void LinkedList::reverse()
{
	if( head != NULL && size()> 1)
	{
		Node* curr = head;
		Node* prev = NULL;
		Node* prevprev = NULL;
		bool flag = false;

		for(;curr != NULL;prevprev = prev,prev=curr,curr = curr->next)
		{
			if(flag == false)
			{
				if(prevprev != NULL)
				{
					prevprev->next = NULL;
					prev->next = prevprev;
					flag = true;
				}
			}
			else
			{
				prev->next = prevprev;
			}
		}
		if (size() == 2)
		{
			prevprev->next = NULL;
			prev->next = prevprev;
		}
		else
		{
			prev->next = prevprev;
		}
		head = prev;
	}
}