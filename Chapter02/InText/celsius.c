/**
 * @file celsius.c
 * @author Mayuresh Patel
 * @brief Converts a Fahrenheit temperature to Celsius
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief macro definitions
 * Named constants that can be used throughout a program.
 * The #define directive is used and when the program is
 * compiled, the preprocessor replaces each macro by
 * the value that it represents.
 */
#define FREEZING_PT 32
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}