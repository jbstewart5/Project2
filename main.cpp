/*
Jonathan Stewart
CIS_211 Assigment #5
*/

#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
	int number;
	char answer;
	do
	{
		cout << "Please enter an integer: \n";
		cin >> number;

		LinkedList list;

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
	}
	while ((answer == 'Y') || (answer == 'y'));

	return(0);
}
