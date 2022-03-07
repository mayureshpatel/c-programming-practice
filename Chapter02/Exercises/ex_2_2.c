/**
 * @file ex_2_2.c
 * @author Mayuresh Patel
 * @brief Exercise 2.1
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * Consider the following program:
 * 
 *  a) Identify the directives and statements in this program
 *  b) What output does the program produce?
 */
#include <stdio.h>      // Directive - standard input/ouput header

int main(void)
{
    /**
     * @brief Expected Output
     * 
     * Parkinson's Law:
     * Work expands so as to fill the time
     * available for its completion.
     * 
     */
    printf("Parkinson's Law:\nWork expands so as to ");     // statement
    printf("fill the time\n");                              // statement
    printf("available for its completion.\n");              // statement

    return 0;
}