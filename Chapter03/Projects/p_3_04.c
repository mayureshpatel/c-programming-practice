/**
 * @file p_3_4.c
 * @author Mayuresh Patel
 * @brief Telephone Number Formatting
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that prompts the user to enter a telephone number in the form
 * (xxx)-xxx-xxxx and then displays the number in the form xxx.xxx.xxxx
 */
#include <stdio.h>

int main(void) {
    int areaCode, regionCode, lineNumber;

    printf("Enter a telephone number (xxx)-xxx-xxxx: ");
    scanf("(%d)-%d-%d", &areaCode, &regionCode, &lineNumber);

    printf("You Entered: %d.%d.%d\n", areaCode, regionCode, lineNumber);
    
    return 0;
}