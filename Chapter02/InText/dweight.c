/**
 * @file dweight.c
 * @author Mayuresh Patel (you@domain.com)
 * @brief Computing the Dimensional Weight of a Box
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    // Declare integer variables
    int height, length, width, volume, weight;

    // Assign values to the integer variables
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;

    /**
     * @brief Calculating the dimensional weight
     * 
     * In C, wehn one integer is divided by another, the answer is
     * truncated: all digits after the decimal point are lost. Dividing
     * by 166 give the answer 5 instead of 5.783, so we end up with
     * a rounded down value. Instead, we want to round up.
     * 
     * One way to do this is by adding 165 to the volume and dividing
     * by 166. So, if the volume was 166, then we would get 331/166 = 1.993,
     * which is 1. But a volume of 332 would return 2 because 332/166 = 2
     * 
     *      (volume + 165) / 166
     * 
     */
    weight = (volume + 165) / 166;

    // Print out the calculations
    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (Cubic Inches): %d\n", volume);
    printf("Dimensional Weight (Pounds): %d\n", weight);

    return 0;
}