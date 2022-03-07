/**
 * @file p_2_5.c
 * @author Mayuresh Patel
 * @brief Polynomial Calculating
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user to enter a value for x and then
 * displays the value of the following polynomial:
 * 
 *      3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */
#include <stdio.h>

int main(void)
{
    // Declare variables
    int xVal;
    int yVal;
    int term1, term2, term3, term4, term5, term6;   // Variables for each term of the polynomial

    // Get user input for the value of x
    printf("Enter a value for x: ");
    scanf("%d", &xVal);

    // Split up the terms of the polynomial and solve individually
    term1 = (3 * xVal * xVal * xVal * xVal * xVal);
    term2 = (2 * xVal * xVal * xVal * xVal);
    term3 = (5 * xVal * xVal * xVal);
    term4 = xVal * xVal;
    term5 = 7 * xVal;
    term6 = 6;

    // Calculate f(x) for the polynomial
    yVal = term1 + term2 - term3 - term4 + term5 - term6;

    // Print out result
    printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("f(%d) = %d\n", xVal, yVal);

    return 0;
}
