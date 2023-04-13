#include <cstdlib>
#include <iostream>
#include "chore.h";

// Constructor
chore::chore() {
	capacity = 10;
	used = 0;
	data = new value_type[capacity];
}

// Insert function
void chore::insertion(const value_type& input) {
	data[used] = input;
	++used;
}

// Size function
size_t chore::size() const {
	return used;
}

// Print function
void chore::print() {
	for (int i = 0; i < used; i++) {
		std::cout << data[i] << ", ";
	}
}

// Delete function
bool chore::deletion(const value_type& input) {
	size_t index;
	index = 0;
	while((index < used) && (data[index] != input))
		++index;
	if (index == used) 
		return false;
	--used;
	data[index] = data[used];
	return true;
}

// Destructor
chore::~chore() {
	 delete [] data;
}