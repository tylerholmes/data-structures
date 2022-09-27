/* Class: CS 3305
 * Term: Spring 2021
 * Name: Tyler Holmes
 * Date: 1/29/2021
 * Instructor: Deepa Muralidhar
 * This program calculates whether a number is a prefect
 * number or not and outputs if it is or not */

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <assert.h>
using namespace std;

/* Precondition: n is a positive int
 * Postcondition: The result of n being a perfect number
 * or not is output */
void perfect(int n)  
{
	/* assert function checks if int n is positive/ > 0 
	 * and terminates if the precondition is not true */
	assert (n > 0);
	// initializing variables for finding perfect numbers
	int sum = 0;
	int i, div;
	/* for loop to check if a number is a perfect number
	 * by looping through and checking all positive numbers
	 * to add up all positive divisors of the number n */
	for(i=1; i < n; i++)
        {
            div = n % i;
            if(div == 0)
            sum += i;
        }
	/* else if statement to print if it is or isn't a perfect number
	 * if the sum of all divisors from the for loop 
	 * is equal to the number n being tested */
	if (sum == n) 
	{
		cout << n <<  " is a perfect number\n";
	}
	else cout << n << " is not a perfect number\n";
}

int main()
{
	/* calling the function with a number n to test if 
	 * it is a perfect number */
	perfect(6);
	perfect(20);
	perfect(5);
	perfect(28);
	perfect(8128);
	perfect(1000);
	
	/* Two cases to test that will cause the program to termniate due to 
	 * the precondition not being true */
	//perfect(0);
	//perfect(-4);
	
	return EXIT_SUCCESS;
}
