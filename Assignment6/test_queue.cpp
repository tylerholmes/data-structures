/* Tyler Holmes
 * CS 3305
 * Deepa Muralidhar
 * Assignment 6
*/

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <assert.h>

#include "queuecircularll.h"

using namespace std;

	QueueCircularLL::QueueCircularLL() {
		used = 0;
		rear_ptr = NULL;
	}
	
	void QueueCircularLL::enqueue(const value_type& entry) {
		main_savitch_5::node* temp = new main_savitch_5::node;
		temp->set_data(entry);
		if (rear_ptr == NULL) {
			rear_ptr = temp;
			rear_ptr->set_link(rear_ptr);
		} else {
			temp->set_link(rear_ptr->link());
			rear_ptr->set_link(temp);
			rear_ptr = temp;
		}
		used++;
	}
	
	void QueueCircularLL::dequeue() {
		if (rear_ptr->link() == rear_ptr) {
			cout << rear_ptr->link()->data();
			delete rear_ptr;
			rear_ptr = NULL;
		} else {
			cout << rear_ptr->link()->data();
			main_savitch_5::list_remove(rear_ptr);
		}
		used--;
	}
	
	int QueueCircularLL::top() {
		return rear_ptr->link()->data();
	}
	
	size_t QueueCircularLL::size() {
		return used;
	}
	
	QueueCircularLL::~QueueCircularLL() {
		main_savitch_5::list_clear(rear_ptr);
	}

int main()
{
	QueueCircularLL q1;
	int input;
	int entry;
	
	while (input != 3) {
		cout << "QUEUE\n-------\n";
		cout << "'1' to push an item \n'2' to pop \n'3' to quit\n";
		cin >> input;
		switch(input) {
			case 1:
			cout << "\nEnter an item to push to the queue:\n";
			cin >> entry;
			q1.enqueue(entry);
			cout << "\nFront: " << q1.top() << "\n";
			cout << "\nSize: " << q1.size() << "\n";
			break;
			case 2:
			cout << "\nPopped the front: ";
			q1.dequeue();
			cout << "\nFront: " << q1.top();
			cout << "\nSize: " << q1.size() << "\n";
			break;
		}
	}
	return EXIT_SUCCESS;
}
