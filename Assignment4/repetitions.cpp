#include <stdio.h>
#include <cstdlib>
#include <node1.h>
#include <iostream>
using namespace std;
using namespace main_savitch_5;

int main()
{
	// initialize node and head of LL
	node* head_ptr = new node(0);
	node* cursor;
	node* iterator;
	node* iterator2;
	
	// Insert numbers to the head of the LL (9 is at the head)
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
	
	// deletes all repetitions of numbers
    // precondition: head_ptr != NULL
    // postcondition: all repetitions are removed from LL
    for (iterator = head_ptr; iterator != NULL; iterator = iterator->link()) {
        for (iterator2 = iterator; iterator2->link() != NULL;) {
          node* temp = iterator2->link();
          if (iterator->data() == iterator2->link()->data()) { 
            list_remove(iterator2);
          }
          iterator2 = temp;
        }
    }
	
	cout << "\nLinked list after repititions removed: ";
	for (cursor = head_ptr; cursor != NULL; cursor = cursor->link()) {
		cout << cursor->data() << ", ";
	}
	
	return EXIT_SUCCESS;
}