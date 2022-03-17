/**
 * @file p_6_7.c
 * @author Mayuresh Patel
 * @brief Smallest/Largest Values
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that finds the largest and smallest of
 * four integers entered by the user:
 * 
 *  Input:
 *      Enter four integers: 21 43 10 35
 *      Largest: 43
 *      Smallest: 10
 * 
 * Use as few if statements as possible. Hint: Four if statements are
 * sufficient.
 */
#include <stdio.h>

int main(void) {
    // Variables
    int integer1, integer2, integer3, integer4;
    int max, min;

    // Get user input
    printf("Enter four integers: ");
    fflush(stdout);
    scanf("%d %d %d %d", &integer1, &integer2, &integer3, &integer4);

    // Find out which ingetgers are the max and min values
    max = integer1;
    min = integer1;
    if(integer2 > max) {
        max = integer2;
    }
    else if(integer2 < min) {
        min = integer2;
    }
    
    if(integer3 > max) {
        max = integer3;
    }
    else if(integer3 < min) {
        min = integer3;
    }
    
    if(integer4 > max) {
        max = integer4;
    }
    else if(integer4 < min) {
        min = integer4;
    }

    // Print the results
    printf("Max Value: %d\n", max);
    printf("Min Value: %d", min);
}