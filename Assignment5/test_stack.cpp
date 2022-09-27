// Tyler Holmes
// Assignment 5
// CS 3305
// Deepa Muralidhar

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Precondition: the stack is not empty
// Postcondition: the contents of the stack is printed from top to bottom
void topToBottom(stack<int> s) {
		stack<int> temp = s;
		int x;
	while (temp.empty() != true)
	{
		int x = temp.top();
		temp.pop();
		cout << x << " ";
	}
}

// Precondition: thestack is not empty
// Postcondition: the contents of the stack is printed from top to bottom
void topToBottom2(stack<double> s) {
		stack<double> temp = s;
		double x;
	while (temp.empty() != true)
	{
		double x = temp.top();
		temp.pop();
		cout << x << " ";
	}
}

// Precondition: thestack is not empty
// Postcondition: the contents of the stack is printed from top to bottom
void topToBottom3(stack<string> s) {
		stack<string> temp = s;
		string x;
	while (temp.empty() != true)
	{
		string x = temp.top();
		temp.pop();
		cout << x << " ";
	}
}

// Precondition: thestack is not empty
// Postcondition: the contents of the stack is printed from top to bottom
void topToBottom4(stack<char> s) {
		stack<char> temp = s;
		char x;
	while (temp.empty() != true)
	{
		char x = temp.top();
		temp.pop();
		cout << x << " ";
	}
}

// Precondition: the stack is not empty
// Postcondition: the contents of the stack is printed from bottom to top
void bottomToTop(stack<double> s) {
		stack<double> temp = s;
		stack<double> temp2;
	while (temp.empty() != true) {
		temp2.push(temp.top());
		temp.pop();
	}
	while (temp2.empty() != true) {
		double x = temp2.top();
		temp2.pop();
		cout << x << " ";
	}
}

// Precondition: the stack is not empty 
// Postcondition: the stack is flipped
void flipStack(stack<string> s) {
		stack<string> temp;
	while (s.empty() != true) {
		temp.push(s.top());
		s.pop();
	}
	s = temp;
	while (s.empty() != true) {
		cout << s.top() << " ";
		s.pop();
	}
}

// Precondition: the stack s2 is not empty
// Postcondition: the function returns if the stack contains the target variable
bool searchStack(stack<int> s, int target) {
	stack<int> temp = s;
	while (temp.empty() == false) {
		if (temp.top() != target) {
			temp.pop();
		}
		else {
			return true;
		}
	}
	return false;
}

// Precondition: the stack s4 is not empty
// Postcondition: the function returns if the stack is a palindrome or not
bool checkIfPalindrome(stack<char> s) {
	stack<char> temp = s;
	stack<char> temp2;
	stack<char> temp3 = s;
	while (temp.empty() != true) {
		temp2.push(temp.top());
		temp.pop();
	}
	while(temp2.empty() != true) {
		if (temp3.top() == temp2.top()) {
			temp3.pop();
			temp2.pop();
		}
		else {
			return false;
		}
	}
	return true;
}

int main()
{
	// First stack object data type integer and pushing integers onto stack
	// Then prints the contents and tests function topToBottom
	stack <int> s1;
	s1.push(8);
	s1.push(8);
	s1.push(7);
	s1.push(5);
	s1.push(5);
	s1.push(4);
	s1.push(3);
	cout << "\nContents of stack:\n";
	topToBottom(s1);
	cout << "\nTesting function topToBottom:\n";
	topToBottom(s1);
	cout << "\n";
	
	// Second stack object data type double and pushing doubles onto stack
	// Then prints stack contents and tests function bottomToTop
	stack <double> s2;
	s2.push(9.7);
	s2.push(5.5);
	s2.push(4.6);
	s2.push(3.5);
	cout << "\nContents of stack:\n";
	topToBottom2(s2);
	cout << "\nTesting function bottomToTop:\n";
	bottomToTop(s2);
	cout << "\n";
	
	// Third stack object data type string and pushing strings onto stack
	// Then prints stack contents and tests function flipStack
	stack<string> s3;
	s3.push("Amy");
	s3.push("Bob");
	s3.push("Tom");
	s3.push("Ed");
	cout << "\nContents of stack: \n";
	topToBottom3(s3);
	cout << "\nTesting function flipStack:\n";
	flipStack(s3);
	cout << "\n";
	
	// Fourth stack object data type integer and pushing integers onto stack
	// Then prints stack contents and tests function searchStack (true and false cases)
	stack <int> s4;
	s4.push(95);
	s4.push(60);
	s4.push(71);
	s4.push(25);
	s4.push(15);
	s4.push(14);
	s4.push(11);
	int target = 88;
	int target2 = 15;
	cout << "\nContents of stack:\n";
	topToBottom(s4);
	cout << "\nTesting function searchStack:\n";
	cout << "Target value 1:\t" << target << "\n";
	if (searchStack(s4,target) == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	cout << "\n";
	cout << "Target value 2:\t" << target2 << "\n";
	if (searchStack(s4,target2) == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	cout << "\n";
	
	// Fifth and Sixth stack object data type char and pushing chars onto stack
	// Then prints contents of both stacks and test both cases of the checkIfPalindrome function (true and false cases)
	stack <char> s5;
	s5.push('R');
	s5.push('A');
	s5.push('C');
	s5.push('E');
	s5.push('C');
	s5.push('A');
	s5.push('R');
	cout << "\nContents of stack:\n";
	topToBottom4(s5);
	cout << "\nTesting function checkIfPalindrome:\n";
	if (checkIfPalindrome(s5) == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	cout << "\n";
	stack <char> s6;
	s6.push('T');
	s6.push('S');
	s6.push('E');
	s6.push('T');
	cout << "\nContents of stack:\n";
	topToBottom4(s6);
	cout << "\nTesting function checkIfPalindrome:\n";
	if (checkIfPalindrome(s6) == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	cout << "\n";
	
	return EXIT_SUCCESS;
}
