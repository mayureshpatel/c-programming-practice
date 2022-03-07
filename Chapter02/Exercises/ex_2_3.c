/**
 * @file ex_2_3.c
 * @author Mayuresh Patel
 * @brief Initializers and Computing in printf
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Condense the dweight.c program by:
 * 
 *      (1) replacing the assignments to height, length, and width with initializers and
 *      
 *      (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf statement.
 */
#include <stdio.h>

int main(void)
{
    // Declare and initialize variables
    int height = 8;
    int length = 12;
    int width = 10;

    // Calculate the volume
    int volume = height * length * width;

    // Calculate the dimensional weight inside the printf statement
    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}