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

void LinkedList::addToHead(int inputprocess, int inputpriority, int inputrun, int inputarrival)
{
	Node* newOne = new Node(inputprocess, inputpriority, inputrun, inputarrival, head);

    if(head == NULL)
    {
        head = newOne;
        tail = newOne;
    }
    else
    {
        Node* temp = head;
        head = newOne;
        newOne->next = temp;
    }
    size++;
}

void LinkedList::addToTail(int inputprocess, int inputpriority, int inputrun, int inputarrival)
{
	Node* newOne = new Node(inputprocess, inputpriority, inputrun, inputarrival, head);

    if(head == NULL)
    {
        head = newOne;
        tail = newOne;
    }
    else
    {
        tail->next = newOne;
        tail = newOne;
    }
    size++;
}

void LinkedList::display()
{
   for (Node* current = head;current != NULL;current = current -> next)
	   cout << current -> process;
}

void LinkedList::fifo()
{
	int i=0;

	Node* current = head;

	for (Node* current = head;current != NULL;current = current -> next)
	{

		for (i=0; i	< current -> run ; i++)
		{
			cout << current -> process;
		}
	}
}