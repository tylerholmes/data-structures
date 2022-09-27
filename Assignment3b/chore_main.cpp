#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "chore.h"
using namespace std;

int main()
{
	// initialize vars and list
	int input = 0;
	char added;
	bool loop = true;
	chore c1;
	
	// while loop and switch case for user input
	while (loop == true)
	{ 
		cout << "Choose one of the following: ";
		cout << "\n(1) Add an item to the list of chores;";
		cout << "\n(2) Ask how many chores are in the list;";
		cout << "\n(3) Have the lift of chores printed to the screen;";
		cout << "\n(4) Delete an item from the list;";
		cout << "\n(5) Exit the program.\n";
		cin >> input;
		switch(input)
		{
			case 1:
			cout << "\nEnter a chore to add:";
			cin >> added;
			c1.insertion(added);
			break;
			case 2:
			cout << "\nNumber of chores in the list: " << c1.size() << "\n";
			break;
			case 3:
			cout << "\nChores in the list: \n";
			c1.print();
			break;
			case 4:
			cout << "\nEnter a chore to be deleted: \n";
			char remove;
			cin >> remove;
			c1.deletion(remove);
			break;
			case 5:
			loop = false;
		}
	}
	return EXIT_SUCCESS;
}
