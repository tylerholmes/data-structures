#ifndef QUEUELL_H
#define QUEUELL_H

#include "node1.h"

class QueueCircularLL
{
	typedef int value_type;
	main_savitch_5::node* rear_ptr; // pointer to the most recently added element, one node behind the front of the queue
	size_t used; // number of nodes used in holding elements
	
public:
	QueueCircularLL();
	~QueueCircularLL();

	// post: adds the value to the end of the queue
	void enqueue(const value_type& entry);
	
	// pre: queue is not empty
	// post: front of queue is removed
	void dequeue();
	
	// pre: queue is not empty
	// post: returns the object in the front of the queue
	int top();
	
	// post: returns number of elements stored in the queue
	size_t size();
};

#endif // QUEUELL_H
