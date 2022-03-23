/**
 * @file p_6_11.c
 * @author Mayuresh Patel
 * @brief Number to English
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user for a two-digit number, then prints
 * the English word for the number:
 * 
 *  Input:
 *      Enter a two-digit number: 45
 *  
 *  Ouptut:
 *      You entered the number: forty-five
 * 
 * HINT: Break the number into two digits. Use one switch statement to print the
 * word for the first digit (twenty, thirty, and so forth). Use a second switch
 * statement to print the word for the second digit. Don't forget that the numbers
 * between 11 and 19 require special treatment.
 */
#include <stdio.h>

/**
 * @brief Prints the suffix of a two-digit number based on the second digit
 * 
 * @param digit the second digit
 */
void printNumberSuffix(int digit) {
    switch(digit) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
    }
}

int main(void) {
    // Variables
    int userVal;
    int digit1, digit2;

    // Get User Input
    printf("Enter a two-digit number: ");
    fflush(stdout);
    scanf("%d", &userVal);
    
    // Break the number into 2 digits
    digit1 = userVal / 10;
    digit2 = userVal % 10;

    // Generate the name for the number
    printf("You entered the number: ");
    switch(digit1) {
        case 1:
            switch(digit2) {
                case 1:
                    printf("Eleven\n");
                    break;
                case 2:
                    printf("Twelve\n");
                    break;
                case 3:
                    printf("Thirteen\n");
                    break;
                case 4:
                    printf("Fourteen\n");
                    break;
                case 5:
                    printf("Fifteen\n");
                    break;
                case 6:
                    printf("Sixteen\n");
                    break;
                case 7:
                    printf("Seventeen\n");
                    break;
                case 8:
                    printf("Eighteen\n");
                    break;
                case 9:
                    printf("Nineteen\n");
                    break;
            }
            break;
        case 2:
            printf("Twenty-");
            printNumberSuffix(digit2);
            break;
        case 3:
            printf("Thirty-");
            printNumberSuffix(digit2);
            break;
        case 4:
            printf("Fourty-");
            printNumberSuffix(digit2);
            break;
        case 5:
            printf("Fifty-");
            printNumberSuffix(digit2);
            break;
        case 6:
            printf("Sixty-");
            printNumberSuffix(digit2);
            break;
        case 7:
            printf("Seventy-");
            printNumberSuffix(digit2);
            break;
        case 8:
            printf("Eighty-");
            printNumberSuffix(digit2);
            break;
        case 9:
            printf("Ninety-");
            printNumberSuffix(digit2);
            break;
    }

    // exit the program
    return 0;
}