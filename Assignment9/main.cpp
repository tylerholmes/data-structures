#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "hashtable.h"

int main()
{
	Hashtable hashtable;
	
	Instructor i1 = Instructor{ "1004551", "Patrick", "Star", "English 1101", "5221"};
	Instructor i2 = Instructor{ "5211797", "Sandy", "Cheeks", "Physics 1111", "2251"};
	Instructor i3 = Instructor{ "6126454", "SpongeBob", "SquarePants", "Math 1112", "8812"};
	Instructor i4 = Instructor{ "2313251", "Squidward", "Tentacles", "Music 1141", "1256"};
	
	hashtable[i1] = new Instructor();
	hashtable[i2] = new Instructor();
	hashtable[i3] = new Instructor();
	hashtable[i4] = new Instructor();
	
	hashtable.printTbl();
	hashtable.remove(i3);
	hashtable.printTbl();
	//hashtable.get(i1);
	//hashtable.get(i2);
	
	return EXIT_SUCCESS;
}
