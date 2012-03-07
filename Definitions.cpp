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
   //Variable to hold the total run time in the nodes
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
    //Increments the total run size by the input run
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
    //Increments the total run size by the input run
	size = size + inputrun;
}

void LinkedList::fifo()
{
	int i=0;
	Node* current = head;

	//Loops through a total of how many runtime iterations we need
	for (i=0; i<size; i++)
	{
		//Traverses the linked list
		for (Node* current = head;current != NULL;current = current -> next)
		{
			//Checks to see what node is available to run
			if ((current->arrival <= i) && (current->run != 0))
			{
				//Runs the process to completion
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

	//Loops through a total of how many runtime iterations we need
	for (i=0; i<size;i++)
	{
		//Sets a temp that is the lowest priority available
		temp = 1;
		
		//Traverses the linked list to find the next available node with highest priority
		for (Node* current = head;current != NULL;current = current -> next)
		{
			//Does a check to see what nodes are available and compares to max.  then resets and checks again
			if ((current -> priority > temp) && (current -> arrival <= i) && (current -> run != 0))
			{
				max = current;
				temp = current -> priority;
			}

		}
		//Output the process ID
		cout << max ->process;
		//Decrement max runtime by 1
		max -> run -= 1;
	}
}

void LinkedList::shortprocnext()
{
	int i;
	int temp;
	Node* current = head;
	Node* min = head;

	//Loops through a total of how many runtime iterations we need
	for (i=0; i<size;i++)
	{
		//Sets a temp higher than the highest runtime available
		temp = 10;
		
		//Traverses the linked list to find the next available node with shortest runtime
		for (Node* current = head;current != NULL;current = current -> next)
		{
			//Does a check to see what nodes are available and compares to min.  then resets and checks again
			if ((current -> run < temp) && (current -> arrival <= i) && (current -> run != 0))
			{
				min = current;
				temp = current -> run;
			}
		}

		//Output the process ID
		cout << min ->process;
		//Decrement min runtime by 1
		min -> run -= 1;
	}
}