/**
 * @file pun.c
 * @author Mayuresh Patel
 * @brief My first C program
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * Understanding the general structure of a C program.
 */

/*
 * directives
 * 
 * int main(void)
 * {
 *      statements
 * }
*/
#include <stdio.h>  // standard input/output header

// main, the actual code that gets run: required
int main(void)
{
    printf("To C, or not to C: that is the question.\n");

    // usually will want to return a termination code to indicate
    // program termination
    return 0;
}