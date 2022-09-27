/* Tyler Holmes
 * Deepa Muralidhar
 * CS 3305
 * Assignment 7
 * */
 
#include <iostream>
#include <assert.h>
#include <cstdlib>

struct ExprTreeNode
{
	enum Type
	{
		number_node,
		operator_node
	};
	
	union Data // a union can hold either types of data, but not both at once
	{
		char op;
		float number;
	};
	
	Type type; // number node or operator node
	Data data_field; // a char or a float
	ExprTreeNode* left;
	ExprTreeNode* right;
	
	ExprTreeNode(float number) // makes a number node
	{
		type = number_node;
		data_field.number = number;
	}
	
	ExprTreeNode(char op) // makes an operator node
	{
		type = operator_node;
		data_field.op = op;
	}
	
	float getNumber() // gets the number only if it's a number node
	{
		assert(type == Type::number_node);
		return data_field.number;
	}
	
	char getOperator() // gets the operator only if it's an operator node
	{
		assert(type == Type::operator_node);
		return data_field.op;
	}
	
	bool isNumNode()
	{
		return type == Type::number_node;
	}
	
	bool isOpNode()
	{
		return type == Type::operator_node;
	}
};



float eval(ExprTreeNode* root)
{
	if (root->isNumNode())
	{
		return root->getNumber();
	}
	
	assert(root->isOpNode());

	float a = eval(root->left);
	float b = eval(root->right);
	
	switch(root->getOperator())
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*': 
			return a * b;
		default:
			std::cout << "invalid operator\n";
			return 0;
	}
}

int main() {
	//First Expression Tree (Textbook Example)
	/* 				*
	 * 			  /   \
	 * 			 +     14
	 * 			/ \
	 * 		   3   7
	 * Algebraic Expression: (3 + 7) * 14 = 140
	 * */
	ExprTreeNode* rootNode;
	ExprTreeNode* times = new ExprTreeNode('*');
	ExprTreeNode* plus = new ExprTreeNode('+');
	ExprTreeNode* fourteen = new ExprTreeNode(14.f);
	
	times->left = plus;
	times->right = fourteen;
	
	ExprTreeNode* three = new ExprTreeNode(3.f);
	ExprTreeNode* seven = new ExprTreeNode(7.f);
	
	plus->left = three;
	plus->right = seven;
	
	rootNode = times;
	std::cout << "Expression tree 1 evaluation: " << eval(rootNode) << std::endl << std::endl;
	
	// Second Expression Tree
	/*				+
	 * 			  /   \
	 * 			 *     *
	 *          / \   / \
	 *         40  5 2   1
	 * Algebraic Expression: (40 * 5) + (2 * 1) = 202 
	 * */
	ExprTreeNode* rootNodeTwo;
	ExprTreeNode* plusTwo = new ExprTreeNode('+');
	ExprTreeNode* timesTwo = new ExprTreeNode('*');
	ExprTreeNode* timesThree = new ExprTreeNode('*');
	
	plusTwo->left = timesTwo;
	plusTwo->right = timesThree;
	
	ExprTreeNode* fourty = new ExprTreeNode(40.f);
	ExprTreeNode* five = new ExprTreeNode(5.f);
	ExprTreeNode* two = new ExprTreeNode(2.f);
	ExprTreeNode* one = new ExprTreeNode(1.f);
	
	timesTwo->left = fourty;
	timesTwo->right = five;
	
	timesThree->left = two;
	timesThree->right = one;
	
	rootNodeTwo = plusTwo;
	std::cout << "Expression tree 2 evaluation: " << eval(rootNodeTwo) << std::endl << std::endl;
	
	// Third expression Tree
	/*				*
	 * 			  /   \
	 *			 8     11
	 * Algebraic Expression: (8 * 11) = 88
	 * */
	ExprTreeNode* rootNodeThree;
	ExprTreeNode* timesFour = new ExprTreeNode('*');
	ExprTreeNode* eight = new ExprTreeNode(8.f);
	ExprTreeNode* eleven = new ExprTreeNode(11.f);
	
	timesFour->left = eight;
	timesFour->right = eleven;
	
	rootNodeThree = timesFour;
	std::cout << "Expression tree 3 evaluation: " << eval(rootNodeThree) << std::endl << std::endl;
	
	return EXIT_SUCCESS;
}