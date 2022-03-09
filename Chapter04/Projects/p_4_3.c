/**
 * @file p_4_3.c
 * @author Mayuresh Patel
 * @brief Split a number without using arithmetic
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Rewrite Project 2 so that it prints the reversal of a three-digit
 * number without using arithmetic to split the number into digits.
 * Hint: see te upc.c program of section 4.1
 */
#include <stdio.h>

int main(void) {
    int digit1, digit2, digit3;
    
    printf("Enter a three-digit number: ");
    fflush(stdout);
    
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
    
    printf("Reversal of the digits: %d%d%d\n", digit3, digit2, digit1);
    
    return 0;
}
