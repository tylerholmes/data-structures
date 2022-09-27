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
#include <math.h>
#include <iostream>
#include <assert.h>
#include "quadratic.h"
using namespace std;

// implements the Quadratic class constructor
Quadratic :: Quadratic(const double A, const double B, const double C)
	:	a(A), b(B), c(C)
{}

// precondition: coefficients are numbers 
// postcondition: expression is printed out 
void Quadratic :: expression(const double A, const double B, const double C)
{
	cout << "Quadratic Expression: " << a << "x^2 + " << b << "x + " << c;
}
// precondition: coefficients are numbers
// postcondition: the expression is evaluated and printed out to the user
void Quadratic :: evaluate(const double A, const double B, const double C)
{
	double discrim = 0;
	double pos = 0;
	double neg = 0;
	discrim = (pow(B, 2) - 4 * A * C);
	pos = (((-B) + sqrt(discrim))/(2*A));
	neg = (((-B) - sqrt(discrim))/(2*A));
	cout << "\nZeros: " << pos << ", " << neg;
}
// precondition: coefficients are numbers
// postcondition: prints number of zeros to the user
void Quadratic :: zeros(const double A, const double B, const double C)
{
	double discrim = 0;
	double pos = 0;
	double neg = 0;
	discrim = (pow(B, 2) - 4 * A * C);
	pos = (((-B) + sqrt(discrim))/(2*A));
	neg = (((-B) - sqrt(discrim))/(2*A));
	
	if (discrim > 0) {
		cout << "\nNumber of zeros: 2";
	}
	else if (discrim = 0) {
		cout << "\nNumber of zeros: 1";
	}
	else cout << "\nNumber of zeros: 0\n";
}
