/**
 * @file p_3_1.c
 * @author Mayuresh Patel
 * @brief Date Input and Transformation
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that accepts a date from the user in the form mm/dd/yyyy
 * and then displays it in the form yyyymmdd:
 * 
 *  Input:
 *      Enter a date (mm/dd/yyyy): 2/17/2011
 *  
 *  Output:
 *      You entered the date 20110217
 */
#include <stdio.h>

int main(void)
{
    // variables, lvalues
    int monthVal, dayVal, yearVal;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &monthVal, &dayVal, &yearVal);

    // Using the precision specification we can describe the minimum number
    // of digits to display
    printf("You entered the date %.4d%.2d%.2d", yearVal, monthVal, dayVal);

    return 0;
}