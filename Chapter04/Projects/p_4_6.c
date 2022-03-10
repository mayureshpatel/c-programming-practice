/**
 * @file p_4_6.c
 * @author Mayuresh Patel
 * @brief European Article Number
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * European countries use a 13-digit code, known as a European Article Number
 * (EAN) instead of the 12-digit Universal Product Code (UPC). Each EAN
 * ends with a check digit, just as a UPC does. The technique for
 * calculating the check digit is also similar:
 * 
 *      Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
 *      Add the first, third, fifth, seventh, ninth, and eleventh digits.
 *      Multiply the first sum by 3 and add it to the second sum.
 *      Subtract 1 from the total.
 *      Compute the remainder when the adjusted total is divided by 10.
 *      Subtract the remainder from 9.
 */
#include <stdio.h>

int main(void) {
    // Variables
    int checkDigit, itemType, manufacturerCode, productCode;
    int manufacturerDigit1, manufacturerDigit2, manufacturerDigit3, manufacturerDigit4, manufacturerDigit5, manufacturerDigit6;
    int productDigit1, productDigit2, productDigit3, productDigit4, productDigit5, productDigit6;
    int firstSum, secondSum, total;
    
    // Get the user input for the EAN
    printf("Enter a 13-digit EAN (#-######-######): ");
    fflush(stdout);

    scanf("%1d-%6d-%6d", &itemType, &manufacturerCode, &productCode);
    printf("itemType: %d\n", itemType);
    printf("manufacturerCode: %d\n", manufacturerCode);
    printf("productCode: %d\n", productCode);

    // Figure out all the digits in the manufacturer and product codes
    manufacturerDigit6 = manufacturerCode % 10;
    manufacturerDigit5 = (manufacturerCode / 10) % 10;
    manufacturerDigit4 = (manufacturerCode / 100) % 10;
    manufacturerDigit3 = (manufacturerCode / 1000) % 10;
    manufacturerDigit2 = (manufacturerCode / 10000) % 10;
    manufacturerDigit1 = (manufacturerCode / 100000) % 10;

    productDigit6 = productCode % 10;
    productDigit5 = (productCode / 10) % 10;
    productDigit4 = (productCode / 100) % 10;
    productDigit3 = (productCode / 1000) % 10;
    productDigit2 = (productCode / 10000) % 10;
    productDigit1 = (productCode / 100000) % 10;

    // Calculate the totals
    firstSum = manufacturerDigit1 + manufacturerDigit3 + manufacturerDigit5 + productDigit1 + productDigit3 + productDigit5;
    secondSum = itemType + manufacturerDigit2 + manufacturerDigit4 + manufacturerDigit6 + productDigit2 + productDigit4 + productDigit6;
    total = (3 * firstSum) + secondSum;
    
    // Calculate the check digit
    checkDigit = 9 - (total % 10);

    printf("Check Digit: %d", checkDigit);

    // exit the program explicitly
    return 0;
}

