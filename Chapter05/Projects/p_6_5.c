/**
 * @file p_6_5.c
 * @author Mayuresh Patel
 * @brief Income Tax Calculator
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * In one state, single residents are subject to the following income tax:
 * 
 *      Income              Amount of tax
 *      Not over 750        1%
 *      750  - 2250         7.50 + 2% over 700
 *      2250 - 3750         37.50 + 3% of amount over 2250
 *      3750 - 5250         82.50 + 4% of amount over 3750
 *      5250 - 7000         142.50 + 5% of amount over 5250
 *      over 7000           230.00 + 6% of amount over 7000
 * 
 * Write a program that asks the user to enter the amount of taxable
 * income, then displays the tax due.
 */
#include <stdio.h>

int main(void) {
    // Variables
    float income, incomeTax;

    // Get user input
    printf("Enter the income for this year: ");
    fflush(stdout);
    scanf("%f", &income);

    // Calculate the income tax
    if(income < 750) {
        incomeTax = income * .01;
    }
    else if(income < 2250) {
        incomeTax = 7.50 + ((income - 750) * .02);
    }
    else if(income < 3750) {
        incomeTax = 37.50 + ((income - 2250) * .03);
    }
    else if(income < 5250) {
        incomeTax = 82.50 + ((income - 3750) * .04);
    }
    else if(income < 7000) {
        incomeTax = 142.50 + ((income - 5250) * .05);
    }
    else {
        incomeTax = 230.00 + ((income - 7000) * .06);
    }

    // Print out the results
    printf("Income Tax: %.2f", incomeTax);

    // exit program
    return 0;
}