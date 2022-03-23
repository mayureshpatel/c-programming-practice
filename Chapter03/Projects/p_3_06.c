/**
 * @file p_3_6.c
 * @author Mayuresh Patel
 * @brief Format Fraction Input
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Modify the addfrac.c program of Section 3.2 so that the user enters both fractions
 * at the same time, separated by a plus sign:
 * 
 *  Input:
 *      Enter two fractions separated by a plus sign: 5/6+3/4
 *  
 *  Output:
 *      The sum is 38/24
 */
#include <stdio.h>

int main(void) {
    // lvalues - variables declared
    int numerator1, denominator1, numerator2, denominator2;
    int lcd;

    // Print out input info and take user input
    printf("Enter two fractions separated by a plus sign (#/#+#/#): ");
    scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2);

    // Feedback for user input
    printf("\nYou entered: %d/%d + %d/%d\n", numerator1, denominator1, numerator2, denominator2);

    // Get the least common denominator (lcd)
    lcd = denominator1 * denominator2;

    // Calculate the new numerators based on the lcd
    numerator1 = numerator1 * denominator2;
    numerator2 = numerator2 * denominator1;

    // Print out the new sum
    printf("New Fraction: %d/%d + %d/%d\n", numerator1, lcd, numerator2, lcd);
    printf("Sum = %d/%d\n", (numerator1 + numerator2), lcd);

    return 0;
}