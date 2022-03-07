/**
 * @file p_4_2.c
 * @author Mayuresh Patel
 * @brief Extend the program from Project 1 to include 3 digits
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Extend the program in Project 1 to handle three-digit numbers.
 */

#include <stdio.h>

int main(void) {
    int userInput, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    fflush(stdout);

    scanf("%d", &userInput);

    digit1 = userInput / 100;           // dividing by 100 returns the first digit and throws out the remainder
    digit2 = (userInput % 100) / 10;    // getting the remainder of the original user input and then dividing by 10
    digit3 = (userInput % 100) % 10;    // getting the remainder of instead give the first last digit

    //printf("First: %d\nSecond: %d\nThird: %d\n", digit1, digit2, digit3);

    printf("Reversed Number: %d%d%d", digit3, digit2, digit1);
    return 0;
}