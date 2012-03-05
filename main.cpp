/*
Jonathan Stewart
CIS_211 Assigment #5
*/

#include <iostream>
//#include <fstream>
#include "Class.h"
using namespace std;

//ifstream in_stream;

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
	list.add (1,3,4,0);
	list.add (2,5,2,2);
	list.add (3,2,1,3);
	list.add (4,4,1,4);
	list.add (5,2,3,5);


	cout << "All of the primes from 0 to is:\n";

	list.display();

	int answer;

	cin >> answer;

	return(0);
}
