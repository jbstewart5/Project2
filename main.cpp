/*
Jonathan Stewart
CIS_322 Assigment #2
Linked list
*/

#include <iostream>
#include <fstream>
#include "Class.h"
using namespace std;

ifstream in_stream;

int main()
{
	//Opens file to read from
	in_stream.open("input.txt");
	if (in_stream.fail())
	{
		cout << "Input file opening failed.\n";
		exit (1);
	}

	//Creates my linked lists to add nodes to
	LinkedList list;
	LinkedList list1;
	LinkedList list2;

	char current=0;
	int tempprocess = 0;
	int temppriority = 0;
	int temprun = 0;
	int temparrival = 0;
	
	//Loop to read entire file and pull every other character into a temp variable, then create a node
	while(! in_stream.eof())
	{
		for (int i=0; i<8; i++)
		{
			in_stream.get(current);

			if (i==0)
			{
				tempprocess = (int)current - 48;
			}

			if (i==2)
			{
				temppriority = (int)current - 48;
			}
			
			if (i==4)
			{
				temprun = (int)current - 48;
			}
			
			if (i==6)
			{
				temparrival = (int)current - 48;
			}
		}
		list.addToTail (tempprocess,temppriority,temprun,temparrival);
		list1.addToTail (tempprocess,temppriority,temprun,temparrival);
		list2.addToTail (tempprocess,temppriority,temprun,temparrival);

	}

	cout << "FIFO\n";
	//Function to call fifo
	list.fifo();
	cout << endl << "Priority Order\n";
	//Function to call Priority Scheduling
	list1.prioritysched();
	cout << endl << "Shortest Process Next\n";
	//Function to call Shortest Process Next
	list2.shortprocnext();
	cout << endl;

	//Close the file
	in_stream.close();

	return(0);
}
