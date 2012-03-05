// Definitions for all functions

#include <iostream>
#include "Class.h"
using namespace std;

Node::Node(int inputprocess, int inputpriority, int inputrun, int inputarrival, Node* inputnext)
{
	process = inputprocess;
	priority = inputpriority;
	run = inputrun;
	arrival = inputarrival;
	next = inputnext;
}

LinkedList::LinkedList()
{
   head = NULL;
}

void LinkedList::add(int inputprocess, int inputpriority, int inputrun, int inputarrival)
{
   head = new Node(inputprocess, inputpriority, inputrun, inputarrival, head);
}

void LinkedList::display()
{
   for (Node* current = head;current != NULL;current = current -> next)
	   cout << current -> process << endl;
}

void LinkedList::prime(int input)
{

	Node* current = head;

	for (int i=2; (i*i)  <= input; i++)
	{
		Node* current = head;

		while ( current != NULL)
		{
			if (((current -> process) % i == 0) && ((current -> process) != i))
				current -> process = 0;

			current = current -> next;
		}
	}
}