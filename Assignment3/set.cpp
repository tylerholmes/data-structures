// Tyler Holmes
// Assignment 3 resubmission
// Deepa Muralidhar
// CS 3305
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include "set.h";

// Constructor
set::set(size_type initial_capacity) {
	data = new value_type[initial_capacity];
	capacity = initial_capacity;
	used = 0;
}

// Copy constructor
set::set(const set& source) {
	data = new value_type[source.capacity];
	capacity = source.capacity;
	used = source.used;
	std::copy(source.data, source.data + used, data);
}

// Insert element in the set 
// Precondition: entry is a number 
// Postcondition: entry is inserted into the dynamic array
void set::insertion(const value_type& entry) {
	data[used] = entry;
	++used;
}

// Delete an element from the set 
// Precondition: entry is in the dynamic array
// Postcondition: entry is deleted from dynamic array
bool set::deletion(const value_type& entry) {
	size_t index;
	index = 0;
	while((index < used) && (data[index] != entry))
		++index;
	if (index == used) 
		return false;
	--used;
	data[index] = data[used];
	return true;
}

// Set size
// Precondition: set exists and has a size
// Postcondition: size of the dynamic array is returned
size_t set::size() const {
	return used;
}

// If element is in the set 
// Precondition: input is a number and is in the dynamic array
// Postcondition: true/false value returned based on if the input is in the dynamic array
bool set::inSet(const value_type& input) {
	for (set::size_type i = 0; i < used; i++) {
		if (input == data[i]) {
			return true;
		}
	}
	return false;
}

// Print
// Precondition: dynamic array exists
// Postcondition: dynamic array is printed out
void set::print() {
	for (int i = 0; i < used; i++) {
		std::cout << data[i] << ",";
	}
}

// Intersection
// Precondition: the two sets are the same value type and exist
// Postcondition: the data of 2 sets are put into a 3rd set based on if both sets contain the number
set operator +(const set& set1, const set& set2) {
    set intersection;
	for (set::size_type i = 0; i < set1.size(); i++) {
		if (set1.data[i] == set2.data[]) {
			intersection.insertion(set1.data[i]);
		}
	}
	return intersection;
}

// Union
// Precondition: both sets are the same value type and exist
// Postcondition: two sets are combined
set operator +=(const set& set1, const set& set2) {
	set combined;
	for (set::size_type i = 0; i < set1.size(); i++) {
		combined.insertion(set1.data[i]);
	}
	for (set::size_type i = 0; i < set2.size(); i++) {
		combined.insertion(set2.data[i]);
	}
	return combined;
}

// Overloaded assignment operator
// Precondition: the new array is bigger than the current array
// Postcondition: creates a new bigger dynamic array and copies over the data
void set::operator =(const set& source) {
	value_type *new_data;
	if (capacity != source.capacity) {
		new_data = new value_type[source.capacity];
		delete [] data;
		data = new_data;
		capacity = source.capacity;
	}
	
	used = source.used;
	std::copy(source.data, source.data + used, data);
}

// Destructor
set::~set() {
	delete [] data;
}

