/* Name:		Tyler Holmes
 * Date:		1/29/2021
 * Class:		CS 3305
 * Term:		Spring 2021
 * Instructor:	Deepa Muralidhar
 * Assignment:	1
 * This program is used to take in the user's weight 
 * and height to calculate height in centimeters, weight
 * in kilograms, and bmi. */

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/* section creates variables to store user input
	 * then asks user for weight and height (feet/inches and pounds) 
	 * stores it in the created variables */
	double pounds, feet, inches;
	cout << "Enter your weight in pounds:\n";
	cin >> pounds;
	cout << "Enter your height in feet and inches as seperate numbers:\n";
	cin >> feet >> inches;
	
	/* section creates variables for bmi and converting height and weight
	 * then converts feet/inches and pounds to kilograms and centimeters.
	 * calculates bmi and prints all calculations out*/
	double kilograms, centimeters, bmi;
	kilograms = (pounds * .453592237);
	centimeters = ((feet * 12) + inches) * 2.54;
	bmi = 10000 * (kilograms) / pow(centimeters, 2);
	cout << "Your weight in kilograms is " << kilograms << "\n.Your height in centimeters is " << centimeters << "\n. Your body mass index is " << bmi << "\n";
		
	/* else if statement to print out statement based on height in centimeters */
	if (centimeters > 215) 
	{
		cout << "Budge up, yeh great giant, you be taller than Hagrid.\n";
	}
	else if (centimeters < 7) 
	{
		cout << "You do look a great deal like a mouse.\n";
	}
	else cout << "You are a fugitive from the law of averages.\n";
	return EXIT_SUCCESS;
}
