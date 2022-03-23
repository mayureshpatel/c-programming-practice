/**
 * @file p_6_10.c
 * @author Mayuresh Patel
 * @brief Numerical Grade to Letter Grade
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Using the switch statement, write a program that converts a numerical
 * grade into a letter grade:
 * 
 *  Input:
 *      Enter numerical grade: 84
 * 
 *  Output:
 *      Letter grade: B
 */
#include <stdio.h>

int main(void) {
    // Variables
    int numericalGrade;

    // Get user input
    printf("Enter numerical grade: ");
    fflush(stdout);
    scanf("%d", &numericalGrade);

    // Switch statement
    printf("Letter Grade: ");
    switch(numericalGrade / 10) {
        case 10:
            printf("A\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }
    
    // exit the program
    return 0;
}