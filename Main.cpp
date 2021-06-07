#include "LinkedList.h" 

int main()
{
	LinkedList* linkedList = new LinkedList();

	linkedList->append(2);
	linkedList->append(4);
	linkedList->prepend(1);
	linkedList->indexInsertion(0,0);
	linkedList->indexInsertion(5,4);
	linkedList->indexInsertion(3,3);
	//cout<<linkedList<<"\n";  output memory
	cout<<*linkedList<<"\n";
	linkedList->reverse();
	cout<<*linkedList<<"\n";
	delete linkedList;
	linkedList = NULL;
	return 0;
}