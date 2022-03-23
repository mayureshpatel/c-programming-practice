/**
 * @file p_2_2.c
 * @author Mayuresh Patel
 * @brief Compute the volume of a sphere
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that computes the volume of a sphere with a
 * 10-meter radius, using the formula v=4/3pir^3. Write the
 * fraction 4/3 as 4.0f/3.0f.
 */
#include <stdio.h>

#define PI 3.1415   // PI = 3.14159265359

int main(void)
{
    int radius = 10;
    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("Volume of a Sphere:\n");
    printf("Radius: %d\n", radius);
    printf("Volume: %.2f\n", volume);

    return 0;
}