/**
 * @file p_6_6.c
 * @author Mayuresh Patel
 * @brief UPC Validity
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Modify the upc.c program so that it checks whether a UPC is valid.
 * After the user enters a UPC, the program will display either VALID
 * or NOT VALID.
 */
#include <stdio.h>

int main(void) {
    // Variables
    int itemCode, manufacturerCode, productCode, checkDigit;
    int manufacturerDigit1, manufacturerDigit2, manufacturerDigit3, manufacturerDigit4, manufacturerDigit5;
    int productDigit1, productDigit2, productDigit3, productDigit4, productDigit5;
    int firstSum, secondSum, total;
    int calculatedCheckDigit;

    // Get user input for a UPC code
    printf("Enter a UPC code: (x-xxxxx-xxxxx-x): ");
    fflush(stdout);
    scanf("%1d-%5d-%5d-%1d", &itemCode, &manufacturerCode, &productCode, &checkDigit);

    // Calculate what the check digit should be
    manufacturerDigit1 = (manufacturerCode / 10000) % 10;
    manufacturerDigit2 = (manufacturerCode / 1000) % 10;
    manufacturerDigit3 = (manufacturerCode / 100) % 10;
    manufacturerDigit4 = (manufacturerCode / 10) % 10;
    manufacturerDigit5 = manufacturerCode % 10;

    productDigit1 = (productCode / 10000) % 10;
    productDigit2 = (productCode / 1000) % 10;
    productDigit3 = (productCode / 100) % 10;
    productDigit4 = (productCode / 10) % 10;
    productDigit5 = productCode % 10;

    firstSum = itemCode + manufacturerDigit2 + manufacturerDigit4 + productDigit1 + productDigit3 + productDigit5;
    secondSum = manufacturerDigit1 + manufacturerDigit3 + manufacturerDigit5 + productDigit2 + productDigit4;
    total = 3 * firstSum + secondSum;
    calculatedCheckDigit = 9 - ((total - 1) % 10);

    // Decide if the check digit is correct
    printf("Check Digit:(Expected: %d | Actual:%d)\n", checkDigit, calculatedCheckDigit);
    if(checkDigit == calculatedCheckDigit) {
        printf("UPC VALID");
    }
    else {
        printf("UPC INVALID");
    }

    // exit the program
    return 0;
}