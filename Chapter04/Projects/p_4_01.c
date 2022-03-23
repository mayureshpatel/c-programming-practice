/**
 * @file p_4_1.c
 * @author Mayuresh Patel
 * @brief Reverse Number
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user to enter a two-digit number,
 * then prints the number with its digits reversed. A session with
 * the program should have the following appearance:
 * 
 *  Input:
 *      ENter a two-digit number: 28
 * 
 *  Output:
 *      The reversal is 82
 * 
 * Read the number using %d, then break it into two digits. Hint:
 * if n is an integer, then n % 10 is the last digit in n and n / 10
 * is n with the last digit removed.
 */

#include <stdio.h>

int main(void) {
    int userInput, digit1, digit2;
    
    printf("Enter a two-digit number: ");

    /*
    * Rules of automatic flushing stdout buffer is implementation-defined
    *
    * "When a stream is unbuffered, characters are intended to appear from
    * the source or at the destination as soon as possible. Otherwise
    * characters may be accumulated and transmitted to or from the host
    * environment as a block."
    */
    fflush(stdout);
    
    scanf("%d", &userInput);
    
    digit1 = userInput % 10;
    digit2 = userInput / 10;

    printf("The reversal is: %d%d", digit1, digit2);
    return 0;
}
