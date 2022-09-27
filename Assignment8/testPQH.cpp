#include <iostream>
#include <cstdlib>
#include <string>
#include "PQ_Heap.h"

void testCase() {
	std::cout << std::endl << "==== Priority Queue Heap Test ====" << std::endl;
	int input;
	int caseIO;
	std::cout << "Enter Queue Type (1 for int or 2 for string)" << std::endl;
	std::cin >> input;
	priority_queue_heap<int> pqHeap1;
	priority_queue_heap<std::string> pqHeap2;
	
	if (input == 1) {
	while (caseIO != 8) {
		std::cout << "==== Priority Queue Heap Test ====" << std::endl;
		std::cout << "1. Enqueue Element" << std::endl;
		std::cout << "2. Dequeue Element" << std::endl;
		std::cout << "3. Check is_Full" << std::endl;
		std::cout << "4. Check is_Empty" << std::endl;
		std::cout << "5. Print size" << std::endl;
		std::cout << "6. Display Front element" << std::endl;
		std::cout << "7. Print queue elements" << std::endl;
		std::cout << "8. Quit Program" << std::endl;
		std::cin >> caseIO;
		
		switch(caseIO) {
			case 1:
				std::cout << "Enter element to enqueue: ";
				std::cin >> input;
				pqHeap1.enqueue(input);
				std::cout << input << " has been enqueued" << std::endl;
				break;
			case 2:
				std::cout << pqHeap1.dequeue() << " has been deqeueued" << std::endl;
				break;
			case 3:
				std::cout << pqHeap1.is_full() << std::endl;
				break;
			case 4:
				std::cout << pqHeap1.is_empty() << std::endl;
				break;
			case 5:
				std::cout << pqHeap1.size() << std::endl;
				break;
			case 6:
				std::cout << pqHeap1.front() << std::endl;
				break;
			case 7:
				pqHeap1.print();
				std::cout << std::endl;
				break;
			}
		}
	} else {
	while (caseIO != 8) {
		std::string input_string;
		std::cout << std::endl << "==== Priority Queue Heap Test ====" << std::endl;
		std::cout << "1. Enqueue Element" << std::endl;
		std::cout << "2. Dequeue Element" << std::endl;
		std::cout << "3. Check is_Full" << std::endl;
		std::cout << "4. Check is_Empty" << std::endl;
		std::cout << "5. Print size" << std::endl;
		std::cout << "6. Display Front element" << std::endl;
		std::cout << "7. Print queue elements" << std::endl;
		std::cout << "8. Quit Program" << std::endl;
		std::cin >> caseIO;
		
		switch(caseIO) {
			case 1:
				std::cout << "Enter element to enqueue: ";
				std::cin >> input_string;
				pqHeap2.enqueue(input_string);
				std::cout << input_string << " has been enqueued" << std::endl;
				break;
			case 2:
				std::cout << pqHeap2.dequeue() << " has been deqeueued" << std::endl;
				break;
			case 3:
				std::cout << pqHeap2.is_full() << std::endl;
				break;
			case 4:
				std::cout << pqHeap2.is_empty() << std::endl;
				break;
			case 5:
				std::cout << pqHeap2.size() << std::endl;
				break;
			case 6:
				std::cout << pqHeap2.front() << std::endl;
				break;
			case 7:
				pqHeap2.print();
				std::cout << std::endl;
				break;
			}
		} 
	}
}

int main() {
	testCase();
	
	
	return EXIT_SUCCESS;
}