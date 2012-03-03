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

void LinkedList::add(int input, bool inputflag)
{
   head = new Node(input, inputflag, head);
}

void LinkedList::display()
{
   for (Node* current = head;current != NULL;current = current -> next)
      if (current -> flag == 1)
		  cout << current -> number << endl;
}

void LinkedList::prime(int input)
{

	Node* current = head;

	for (int i=2; (i*i)  <= input; i++)
	{
		Node* current = head;

		while ( current != NULL)
		{
			if (((current -> number) % i == 0) && ((current -> number) != i))
				current -> flag = 0;

			current = current -> next;
		}
	}
}