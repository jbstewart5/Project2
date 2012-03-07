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
   size = 0;
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
    size = size + inputrun;
}

void LinkedList::addToTail(int inputprocess, int inputpriority, int inputrun, int inputarrival)
{
	Node* newOne = new Node(inputprocess, inputpriority, inputrun, inputarrival, NULL);

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
    size = size + inputrun;
}

void LinkedList::fifo()
{
	int i=0;
	Node* current = head;

	for (i=0; i<size; i++)
	{
		for (Node* current = head;current != NULL;current = current -> next)
		{
			if ((current->arrival <= i) && (current->run != 0))
			{
				for (int j=0; j<current->run;j++)
				{
					cout << current->process;
					current->run -= 1;
				}
			}
		}
	}
}


void LinkedList::prioritysched()
{
	int i;
	int temp;
	Node* current = head;
	Node* max = head;

	for (i=0; i<size;i++)
	{
		temp = 1;
		
		for (Node* current = head;current != NULL;current = current -> next)
		{
			if ((current -> priority > temp) && (current -> arrival <= i) && (current -> run != 0))
			{
				max = current;
				temp = current -> priority;
			}

		}
		cout << max ->process;
		max -> run -= 1;
	}
}

void LinkedList::shortprocnext()
{
	int i;
	int temp;
	Node* current = head;
	Node* min = head;

	for (i=0; i<size;i++)
	{
		temp = 10;
		
		for (Node* current = head;current != NULL;current = current -> next)
		{
			if ((current -> run < temp) && (current -> arrival <= i) && (current -> run != 0))
			{
				min = current;
				temp = current -> run;
			}
		}

		cout << min ->process;
		min -> run -= 1;
	}
}