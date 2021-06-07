#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
using namespace std;


class Node{
	
public:
	Node(int data);
	int getData();
	Node* next;
private:
	int data;
};

#endif