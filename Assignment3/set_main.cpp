// Tyler Holmes
// Assignment 3 resubmission
// Deepa Muralidhar
// CS 3305
#include <stdio.h>
#include <cstdlib>
#include "set.h";
using namespace std;

int main()
{
	// initialize set and variables
	set s1;
	set s2;
	int* set1;
	int* set2;
	int size1 = 10;
	int size2 = 10;
	set1 = new int[size1];
	set2 = new int[size2];

	// insert numbers into set 1
	s1.insertion(4);
	s1.insertion(6);
	s1.insertion(5);
	s1.insertion(1);
	s1.insertion(3);
	s1.insertion(10);
	s1.insertion(8);
	s1.insertion(9);
	
	// insert numbers into set 2
	s2.insertion(1);
	s2.insertion(12);
	s2.insertion(5);
	s2.insertion(9);
	s2.insertion(7);
	s2.insertion(5);
	s2.insertion(4);
	s2.insertion(9);
	s2.insertion(13);
	s2.insertion(3);
	
	// output set 1 & 2 sizes and the contents of each set
	cout << "Set 1 size: " << s1.size() << "\nSet 2 size: " << s2.size();
	cout << "\nSet 1: ";
	s1.print();
	cout << "\nSet 2: ";
	s2.print();
	
	// delete elements from both sets
	cout << "\nDeleting 5 from set 1: (0 = not in set, 1 = deleted) " << s1.deletion(5);
	cout << "\nDeleting 12 from set 2: (0 = not in set, 1 = deleted)" << s2.deletion(12);
	cout << "\nDeleting 100 from set 2: (0 = not in set, 1 = deleted)" << s2.deletion(100);
	
	// check if either set containts an element
	cout << "\nChecking if 12 is in set 1 or set 2:";
	cout << "\n" << s1.inSet(12);
	cout << "\n" << s2.inSet(12);
	
	// intersects set 1 & 2
	set s3 = operator +(s1,s2);
	cout << "\nIntersection of set 1 and set 2: ";
	s3.print();
	
	// unions set 1 & 2
	set s4 = operator +=(s1,s2);
	cout << "\nUnion of set 1 and set 2: ";
	s4.print();
	
	// statement to prevent cmd window from closing (ran into issues with it closing immediatlly)
	getchar();
	
	return EXIT_SUCCESS;
}
