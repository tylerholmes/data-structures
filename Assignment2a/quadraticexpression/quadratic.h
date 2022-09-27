/* 
 * Class: CS 3305
 * Date: 2/5/2021
 * Term: Spring 2021
 * Name: Tyler Holmes
 * Instructor: Deepa Muralidhar
 * Assignment: 2
 * */

#include <cstdlib>
#include <assert.h>

class Quadratic
{
	// create private variables a,b,c
	private:
		double a;
		double b;
		double c;
	// public constructor and functions for calculating zeros, printing expression, and printing number of zeros
	public:
		Quadratic(const double A = 0, const double B = 0, const double C = 0);
		void expression(const double A, const double B, const double C);
		void evaluate(const double A, const double B, const double C);
		void zeros(const double A, const double B, const double C);
};
