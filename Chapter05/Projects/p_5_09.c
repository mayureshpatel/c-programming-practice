/**
 * @file p_6_9.c
 * @author Mayuresh Patel
 * @brief Earlier Date
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that prompts the user to enter two dates and then
 * indicates which date comes earlier on the calendar:
 * 
 *  Input:
 *      Enter first date (mm/dd/yy): 3/6/08
 *      Enter second date (mm/dd/yy): 5/17/07
 * 
 *  Output:
 *      5/17/07 is earlier than 3/6/08     
 */
#include <stdio.h>

int main(void) {
    // Variables
    int firstMonth, firstDay, firstYear;
    int secondMonth, secondDay, secondYear;

    // Get user input
    printf("Enter first date (mm/dd/yy): ");
    fflush(stdout);
    scanf("%2d/%2d/%2d", &firstMonth, &firstDay, &firstYear);

    printf("Enter second date (mm/dd/yy): ");
    fflush(stdout);
    scanf("%2d/%2d/%2d", &secondMonth, &secondDay, &secondYear);
    
    // Decide which date comes first
    if(firstYear < secondYear) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
    }
    else if(firstYear > secondYear) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
    }
    else {
        if(firstMonth < secondMonth) {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
        }
        else if(firstMonth > secondMonth) {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
        }
        else {
            if(firstDay < secondDay) {
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
            }
            else if(firstDay > secondDay) {
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
            }
            else {
                printf("%02d/%02d/%02d and %02d/%02d/%02d are the same dates", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
            }
        }
    }

    // exit the program
    return 0;
}