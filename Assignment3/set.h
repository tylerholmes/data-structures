// Tyler Holmes
// Assignment 3 resubmission
// Deepa Muralidhar
// CS 3305
#include <cstdlib>
#include <iostream>
#include <algorithm>

class set {
	
public:
	typedef int value_type;
	typedef std::size_t size_type;
	static const size_type DEFAULT_CAPACITY = 10;
	
	// constructor
	set(size_type initial_capacity = DEFAULT_CAPACITY);
	
	// copy constructor
	set(const set& source);
	
	// insert element
	void insertion(const value_type& input);
	
	// delete target element
	bool deletion(const value_type& input);
	
	// set size
	size_t size() const;
	
	// check if num is in set
	bool inSet(const value_type& input);
	
	// print
	void print();
	
	// union
	friend set operator +=(const set& set1, const set& set2);
	
	// intersection 
	friend set operator +(const set& set1, const set& set2);
	
	// overloaded assignment operator
	void operator =(const set& source);
	
	// destructor
	~set();
	
private:
	value_type *data;
	size_type used;
	size_type capacity;
};