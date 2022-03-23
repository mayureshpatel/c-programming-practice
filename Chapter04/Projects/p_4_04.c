/**
 * @file p_4_4.c
 * @author Mayuresh Patel
 * @brief Decimal to Octal Converter
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that reads an integer entered by the user and displays
 * it in octal (base 8):
 * 
 *  Input:
 *      Enter a number between 0 and 32767: 1953
 *  
 *  Output:
 *      In Octal, your number is: 03641
 * 
 * The output should be displayed using five digits, even if fewer digits
 * are sufficient. Hint: To convert the number to octal, first divide it
 * by 8. The remainder is the last digit of the octal number. Then divide
 * the original number by 8 and repeat the process to arrive
 * at the next-to-last digit.
 * 
 * NOTE: printf has a way to display octal numbers, which will be discussed
 * later.
 */
#include <stdio.h>

int main(void) {
    int userVal, temp, digit1, digit2, digit3, digit4, digit5;
    
    printf("Enter any number between 0 and 32767: ");
    fflush(stdout);

    scanf("%d", &userVal);
    
    /*
     * for each of the possible digits (5) in an octal number between
     * 0 and 32767, find the remainder of the number, and then divide by
     * 8. Repeat this process.
    */
    // Digit 1
    digit5 = userVal % 8;
    temp = userVal / 8;

    // Digit 2
    digit4 = temp % 8;
    temp = temp / 8;

    // Digit 3
    digit3 = temp % 8;
    temp = temp / 8;

    digit2 = temp % 8;
    temp = temp / 8;

    // Digit 5
    digit1 = temp % 8;
    temp = temp / 8;

    printf("%d%d%d%d%d", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
