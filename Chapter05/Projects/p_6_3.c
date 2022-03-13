/**
 * @file p_6_3.c
 * @author Mayuresh Patel
 * @brief Broker Program Update
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Modify the broker program by making the following changes:
 * 
 *      a) Ask the user to enter the number of shares and the price per
 *          share, instead of the value of the trade.
 * 
 *      b) Add statements that compute the commission charged by a rival broker
 *          ($33 plus 3 cents per share for fewer than 2000 shares; $33 plus 2
 *          cents per share for 2000 shares or more). Display the rival's commission
 *          as well as the commission charged by the original broker.
 */
#include <stdio.h>

int main(void) {
    // variables
    int numberOfShares;
    float pricePerShare, commission;

    // get user input
    printf("Enter the price per share: ");
    fflush(stdout);
    scanf("%f", &pricePerShare);

    printf("Enter the number of shares: ");
    fflush(stdout);
    scanf("%d", &numberOfShares);

    // Calculate the commission
    if(numberOfShares < 2000) {
        commission = 33 + (.03 * numberOfShares);
    }
    else {
        commission = 33 + (.02 * numberOfShares);
    }

    // Print out information
    printf("Rival broker commission: %.2f", commission);

    // exit the program
    return 0;
}