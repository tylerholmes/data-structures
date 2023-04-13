#include <cstdlib>
#include <iostream>
#include <string>
#include "instructor.h"

class Hashtable {
	
	static const int CAPACITY = 20;
	static const int arr_size = CAPACITY * 2;
	
	typedef Instructor key_type;
	typedef Instructor* value_type;

struct Slot
	{
		key_type key;
		value_type value = nullptr;
		
		enum Status
		{
			empty, // never before used
			taken, // currently used
			tombstone // used but since deleted
			// we have a tombstone status so that we know to continue to linearly probe when searching for a key because it means that our target 
			// key may have been inserted after that tombstone if there was a collision that happened before that would have shifted over our target key
		};
		
		Status status = empty; // default status is empty
	};

Slot data[arr_size];
int used = 0;

public:

// hash function, inspiration from djb2 algorithm
unsigned hash(std::string key) {
	unsigned long hash = 5381;
	unsigned int size = key.length();
	unsigned int i = 0;
	for (i = 0; i < size; i++) {
		hash = ((hash << 5) + hash) + (key[i]); 
	}
	return hash;
}

// remove an element using the key
void remove(key_type& key);

// insert an element using the key
value_type& operator[](key_type& key);

//search for instructor or course
void get(key_type& key);

// prints the table
void printTbl();
};