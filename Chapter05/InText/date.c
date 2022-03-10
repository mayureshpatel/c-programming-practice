/**
 * @file date.c
 * @brief 
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Contracts and other legal documents are often dated in the following way:
 * 
 *      Dated this ______________ day of ______________, 20__.
 * 
 * Write a program that displays dates in this form. Have the user enter the date in
 * month/day/year format, then display the date in "legal" form.
 * 
 *  Input:
 *      Enter date (mm/dd/yy): 7/19/14
 * 
 *  Output:
 *      Dated this 19th day of July, 2014.
 * 
 * Think about how the 'st' 'nd' 'rd' or 'th' are added and how the month is extracted
 * from the month number.
 */
#include <stdio.h>

int main(void) {
    int month, day, year;
    
    // Get user input
    printf("Enter date (mm/dd/yy): ");
    fflush(stdout);
    scanf("%2d/%2d/%2d", &month, &day, &year);
    
    // Being printing the output
    printf("Dated this %2d", day);
    
    // First use a switch statement to figure out which suffix to use
    switch(day) {
        case 1: case 21: case 31:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
        default:
            printf("th");
	    break;
    }

    // Print the second part of the output
    printf(" day of ");

    // Use a switch statement to figure out which month to print
    switch(month) {
        case 1:
            printf("Januaary");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    // Complete printing out the output
    printf(", 20%2d.\n", year);

    // exit the program
    return 0;
}
