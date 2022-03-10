/**
 * @file p_6_1.c
 * @author Mayuresh Patel
 * @brief Number of Digits
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that calculates how many digits a number contains:
 * 
 *  Input:
 *      Enter a number: 374
 * 
 *  Output:
 *      The number 374 has 3 digits
 * 
 *  Constaints:
 *      N < 9999
 */
#include <stdio.h>

int main(void) {
    // Variables
    int userVal, numberOfDigits;

    // Get user input
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%4d", &userVal);

    // Using if statements, print determine the number of digits
    if(userVal < 10) {
        numberOfDigits = 1;
    }
    else if(userVal < 100) {
        numberOfDigits = 2;
    }
    else if(userVal < 1000) {
        numberOfDigits = 3;
    }
    else {
        numberOfDigits = 4;
    }

    // print the output
    printf("The number %d has %d digits.", userVal, numberOfDigits);

    // exit the program
    return 0;
}