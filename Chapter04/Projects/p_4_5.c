/**
 * @file P_4_5.c
 * @author Mayuresh Patel
 * @brief Rewrite upc program of 4.1
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * Rewrite the upc.c program of section 4.1 so that the user enters 11 digits
 * at one time, instead of entering one digit, then five digits, and then another
 * five digits. 
 */
#include <stdio.h>

int main(void) {
    int itemType, manufacturerCode, productCode, checkDigit;
    int manufacturerDigit1, manufacturerDigit2, manufacturerDigit3, manufacturerDigit4, manufacturerDigit5;
    int productDigit1, productDigit2, productDigit3, productDigit4, productDigit5;
    int first_sum, second_sum, total;

    printf("Enter a UPC code (#-#####-#####): ");
    fflush(stdout);
    scanf("%1d-%5d-%5d", &itemType, &manufacturerCode, &productCode);

    // Get the digits for the manufacturer code
    manufacturerDigit1 = (manufacturerCode / 10000) % 10;
    manufacturerDigit2 = (manufacturerCode / 1000) % 10;
    manufacturerDigit3 = (manufacturerCode / 100) % 10;
    manufacturerDigit4 = (manufacturerCode / 10) % 10;
    manufacturerDigit5 = manufacturerCode % 10;

    // Get the digits for the product code
    productDigit1 = (productCode / 10000) % 10;
    productDigit2 = (productCode / 1000) % 10;
    productDigit3 = (productCode / 100) % 10;
    productDigit4 = (productCode / 10) % 10;
    productDigit5 = productCode % 10;

    // Calculate the sums
    first_sum = itemType + manufacturerDigit2 + manufacturerDigit4 + productDigit1 + productDigit3 + productDigit5;
    second_sum = manufacturerDigit1 + manufacturerDigit3 + manufacturerDigit5 + productDigit2 + productDigit4;
    total = 3 * first_sum + second_sum;
    checkDigit = 9 - ((total - 1) % 10);

    // Print out the check digit
    printf("Check digit: %d\n", checkDigit);

    return 0;
}
