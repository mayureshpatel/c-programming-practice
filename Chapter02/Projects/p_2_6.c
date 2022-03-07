/**
 * @file p_2_6.c
 * @author Mayuresh Patel
 * @brief Modify project 5
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Modify the program of project 5 so that the polynomial is evaluated
 * using the following formula:
 * 
 *      ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */
#include <stdio.h>

int main(void)
{
    // Declare variables
    int xVal;
    int yVal;

    // Get user input for the value of x
    printf("Enter a value for x: ");
    scanf("%d", &xVal);

    // Calculate f(x) for the polynomial
    yVal = ((((3 * xVal + 2) * xVal - 5) * xVal - 1) * xVal + 7) * xVal - 6;

    // Print out result
    printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("f(%d) = %d\n", xVal, yVal);

    return 0;
}