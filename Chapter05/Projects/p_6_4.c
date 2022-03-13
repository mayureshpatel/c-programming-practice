/**
 * @file p_6_4.c
 * @author Mayuresh Patel
 * @brief Beaufort Scale
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Here's a simplified version of the Beaufort scale, which is used
 * to estimate wind force:
 * 
 *      Speed(knots)        Description
 *      Less than 1         Calm
 *      1 - 3               Light air
 *      4 - 27              Breeze
 *      28 - 47             Gale
 *      48 - 63             Storm
 *      Above 63            Hurricane
 * 
 * Write a program that asks the user to enter a wind speed (in knots),
 * then displays the corresponding description.
 */
#include <stdio.h>

int main(void) {
    // Variables
    float windSpeed;

    // Get user input
    printf("Enter the wind speed in knots: ");
    fflush(stdout);
    scanf("%f", &windSpeed);

    // Calculate the wind description based on the Beaufort scale
    printf("Wind Speed on Beaufort Scale: ");
    if(windSpeed < 1) {
        printf("Calm\n");
    }
    else if(windSpeed < 4) {
        printf("Light Air\n");
    }
    else if(windSpeed < 28) {
        printf("Breeze\n");
    }
    else if(windSpeed < 48) {
        printf("Gale\n");
    }
    else if(windSpeed < 63) {
        printf("Storm\n");
    }
    else {
        printf("HUrricane\n");
    }

    // exit the program
    return 0;
}