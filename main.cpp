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

	LinkedList list;

	char current=0;
	/*
	while(! in_stream.eof())
	{
		in_stream.get(current);

		if (current == '\n')
		{
			master=add(master,msize,data,size);

			size=0;
			data=new int [size];
		}
		else
			data=add(data,size,current);
	}*/

	// Creates the list of numbers to add to Linked list
	list.addToTail (1,3,4,0);
	list.addToTail (2,5,2,2);
	list.addToTail (3,2,1,3);
	list.addToTail (4,4,1,4);
	list.addToTail (5,2,3,5);

	//list.fifo();
	//list.prioritysched();

	list.shortprocnext();

	//list.display();

	return(0);
}
