/**
 * @file p_3_2.c
 * @author Mayuresh Patel
 * @brief Product Information Formatting
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that formats product information entered by the user.
 * A session with the program might look like this:
 * 
 *  Input:
 *      Enter item number: 583
 *      Enter Unit Price: 13.5
 *      Enter Purchase Date (mm/dd/yyyy): 10/24/2021
 * 
 *  Ouput:
 *      Item            Unit                Purchase
 *                      Price               Date
 *      583             $   13.50           10/24/2021
 * 
 * The item number and date should be left justified; the unit price should
 * be right justified. Allow dollar amounts up to $9999.99. Hint: use
 * tabs to line up the columns.
 */
#include <stdio.h>

int main(void) {
    int itemNumber;
    float unitPrice;
    int dateMonth, dateDay, dateYear;

    // Gather User Input
    printf("Enter Item Number: ");
    scanf("%d", &itemNumber);

    printf("Enter Unit Price: $");
    scanf("%f", &unitPrice);

    printf("Enter Purchase Date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &dateMonth, &dateDay, &dateYear);

    // Output
    printf("\tItem\tUnit Price\tPurchase Date\n");
    printf("\t%-8d$%8.2f\t%.2d/%.2d/%.2d\n", itemNumber, unitPrice, dateMonth, dateDay, dateYear);
}