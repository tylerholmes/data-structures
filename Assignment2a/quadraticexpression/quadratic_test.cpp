/* 
 * Class: CS 3305
 * Date: 2/5/2021
 * Term: Spring 2021
 * Name: Tyler Holmes
 * Instructor: Deepa Muralidhar
 * Assignment: 2
 * */

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "quadratic.h"
using namespace std;

int main()
{
	// initialize variable for user input
	double A = 0; double B = 0; double C = 0;
	// ask for user input and store as A,B,C
	cout << "Enter coefficients a, b, and c: ";
	cin >> A >> B >> C;
	// create a class object from Quadratic
	Quadratic q1(A, B, C);
	// tests functions from quadratic class
	q1.expression(A,B,C);
	q1.evaluate(A,B,C);
	q1.zeros(A,B,C);
	
	return EXIT_SUCCESS;
}
