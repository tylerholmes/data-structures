#include <stdio.h>
#include <cstdlib>
#include <node1.h>
#include <iostream>
using namespace std;
using namespace main_savitch_5;

int main()
{
	// initialize nodes and head of LL
	node* head_ptr = new node(0);
	node* cursor;
	node* cursor2;
	
	// Insert numbers to the head of the LL
	list_head_insert(head_ptr, 1);
	list_head_insert(head_ptr, 6);
	list_head_insert(head_ptr, 1);
	list_head_insert(head_ptr, 4);
	list_head_insert(head_ptr, 5);
	list_head_insert(head_ptr, 2);
	list_head_insert(head_ptr, 5);
	list_head_insert(head_ptr, 6);
	list_head_insert(head_ptr, 7);
	list_head_insert(head_ptr, 0);
	list_head_insert(head_ptr, 1);
	list_head_insert(head_ptr, 2);
	list_head_insert(head_ptr, 8);
	list_head_insert(head_ptr, 9);
	
	// prints LL after being filled with nums
	cout << "Linked list: ";
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link()) {
		cout << cursor->data() << ", ";
	}
	
	// function to sort LL (selection sort)
	// precondition: head doesn't point to NULL
	// postcondition: linked list is sorted via selection sort
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link()) {
		for (cursor2 = cursor; cursor->link() != NULL;) {
			node* temp;
			if (cursor2->data() > cursor->link()->data()) {
				temp = cursor->link();
				list_head_insert(head_ptr,temp->data());
				list_remove(cursor);
			}
		}
	}
	
	cout << "\nLinked list after selection sort: ";
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link()) {
		cout << cursor->data() << ", ";
	}
	
	return EXIT_SUCCESS;
}