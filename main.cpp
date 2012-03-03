/*
Jonathan Stewart
CIS_211 Assigment #5
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

	LinkedList list;

	char current=0;

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
	}

	// Creates the list of numbers to add to Linked list
	for (int counter=2;counter<number;counter++)
		list.add(counter, 1);

	// Launches the Prime function to flag all prime numbers
	list.prime(number);

	cout << "All of the primes from 0 to " << number << " is:\n";

	list.display();

	// Loop to try again
	cout << "Would you like to try again?";
	cin >> answer;

	in_stream.close();

	return(0);
}
