/**
 * @file p_2_3.c
 * @author Mayuresh Patel
 * @brief Using scanf to Calculate the Volume of a Sphere
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Modify project 2 so that it prompts the user to enter the radius
 * of the sphere.
 */
#include <stdio.h>

#define PI 3.1415   // PI = 3.14159265359

int main(void)
{
    // Declare variables
    int radius;
    float volume;

    // Get user input
    printf("Enter radius: ");
    scanf("%d", &radius);

    // Calculate volume
    volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    // Print output
    printf("Volume of a Sphere of Radius %d = %.2f\n", radius, volume);

    return 0;
}
