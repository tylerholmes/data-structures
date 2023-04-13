#include <cstdlib>
#include <iostream>
#include <string>
#include "assert.h"
#include "hashtable.h"

void Hashtable::remove(key_type& key) {
	int idx = hash(key.instructorID) % arr_size;
	
	while (data[idx].status != Slot::empty 
			and not(
				data[idx].key == key and data[idx].status == Slot::taken
			)
		)
	{		
		idx = (idx + 1) % arr_size;
	}
	
	// if the slot at the end of our traversal is empty, the value wasn't in the hash table
	if (data[idx].status == Slot::empty)
	{
		// key wasn't found
		std::cout << "attempted deleting a key that doesn't exist" << std::endl;
		return;
	}
	
	// we found it
	if (data[idx].key == key)
	{
		assert(data[idx].status == Slot::taken); // debug, this must be true
		std::cout << "The key has been deleted." << std::endl;
		used--;
		// we set the slot to be a tombstone so that anything that linearly probed for a slot due to a collision 
		// with this key before will come after this tombstone
		// we only set it to a tombstone if there is possibly a value that comes after in the local cluster
		// if the next space is empty, this was the last item in the cluster
		if (data[(idx + 1) % arr_size].status != Slot::empty)
		{
			data[idx].status = Slot::tombstone;
		}
		else
		{
			data[idx].status = Slot::empty;
		}
		
		if (data[idx].value != nullptr) delete data[idx].value;
		data[idx].value = nullptr;
	}
}

Hashtable::value_type& Hashtable::operator[](key_type& key) {
	{
	std::cout << "begin [] operator function\n";
	
	// index calcuated by the hash function
	int index = hash(key.instructorID) % arr_size;
	
	std::cout << "calculated hashed index to be " << index << std::endl;
	
	bool encountered_available_slot = false; // have we encountered an index which can have something placed into it?
	int lowest_available_index = index; // the lowest index that we can insert something into
	
	// if the current slot is either a tombstone or empty (not taken), we can insert into it
	std::cout << "is index " << index << " available? ";
	if (data[index].status != Slot::taken)
	{ 
		std::cout << "yes\n";
		encountered_available_slot = true;
	} else std::cout << "no\n";
	
	std::cout << "beginning check if the key already exists in the table\n";
	
	// we still have to make sure that the key doesn't already exist elsewhere
	while (data[index].status != Slot::empty // we continue while the current slot is not empty (it's either a tombstone or taken), 
	// because linear probing could have moved our target key over
			and not( // also, we stop if we encounter our key in a active slot
				data[index].key == key and data[index].status == Slot::taken
			)
		)
	{
		// if the slot is not taken, then we have our first available spot to insert into
		if (!encountered_available_slot and data[index].status != Slot::taken)
		{
			encountered_available_slot = true;
			lowest_available_index = index;
		}
		
		std::cout << "index " << index << " is " << (data[index].status == Slot::taken ? "taken" : "a tombstone") << ", continuing search\n";
		
		index = (index + 1) % arr_size; 
	}
	
	// at the end of the traversal, if our keys match, then the key already existed in the table and we found it
	if (data[index].key == key)
	{
		assert(data[index].status == Slot::taken); // debug, this must be true
		
		// we found the key
		std::cout << "key already exists at " << index << ", returning value reference\n\n";
		return data[index].value;
	}
	// if at the end of our traversal we didn't find our key, then we insert one at the first available spot we found
	else if (data[index].status != Slot::taken)
	{
		// the key doesn't exist, so let's insert it
		assert(used < CAPACITY);
		used++;
		
		// if we found an available slot before the current one
		if (encountered_available_slot)
		{
			index = lowest_available_index;
		}
		
		std::cout << "the key was not found, inserting at index " << index << " and returning a reference to the value\n\n";
		
		data[index].key = key;
		data[index].status = Slot::taken;
		return data[index].value;
	}
}
}

void Hashtable::get(key_type& key) {
	int idx = hash(key.instructorID);
	while(data[idx].key != key && data[idx].status != Slot::empty) {
		idx = (idx + 1) % arr_size;
	} if ( data[idx].key == key) {
		std::cout << key.instructorID << " is in the hash table." << std::endl;
	} else { std::cout << key.instructorID << " is not in the hash table." << std::endl;
	}
} 

void Hashtable::printTbl() {
		for (int i = 0; i < arr_size; i++)
	{
		std::cout << i << ": ";
		if (data[i].status == Slot::empty) std::cout << "empty" << std::endl;
		if (data[i].status == Slot::tombstone) std::cout << "tombstone" << std::endl;
		if (data[i].status == Slot::taken) std::cout << "KEY: " << data[i].key.instructorID << " First Name: " << data[i].key.firstName << " Last Name: " << data[i].key.lastName << " Course name: " << data[i].key.courseName << " Course Number: " << data[i].key.courseID << std::endl;
	}
	
	std::cout << std::endl;
}
