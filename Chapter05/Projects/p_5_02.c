/**
 * @file p_6_2.c
 * @author Mayuresh Patel
 * @brief Time Conversion - 12h to 24h
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user for a 24h time, then displays the time
 * in 12h format:
 * 
 *  Input:
 *      Enter a 24h time: 21:11
 * 
 *  Output:
 *      Equivalent 12h time: 9:11 PM
 */
#include <stdio.h>

int main(void) {
    // variables
    int userHour, userMinute;

    // Get input from the user
    printf("Enter a 24h time: ");
    fflush(stdout);
    scanf("%2d:%2d", &userHour, &userMinute);

    // Calculate the 12 hour time
    printf("Equivalent 12h time: ");
    if(userHour > 12) {
        printf("%d:%d pm\n", (userHour - 12), userMinute);
    }
    else {
        printf("%d:%d am\n", userHour, userMinute);
    }

    // exit the program
    return 0;
}