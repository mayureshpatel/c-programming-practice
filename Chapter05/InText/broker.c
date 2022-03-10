/**
 * @file broker.c
 * @brief Calculating a Broker's Commission
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * When stocks are sold or purchased through a broker, the broker's commission
 * is often computed using a sliding scale that depends upon the value of the
 * stocks traded. Let's say that a broker charges the amounts shown in the
 * following table:
 * 
 *      Transaction Size:           Commission Rate:
 *      Under 2,500                 $30 + 1.7%
 *      2,500 - 6,250               $56 + 0.66%
 *      6,250 - 20,000              $76 + 0.34%
 *      20,000 - 50,000             $100 + 0.22%
 *      50,000 - 500,000            $155 + 0.11%
 *      Over 500,000                $255 + 0.09%
 * 
 * Ask the user to enter the amount of the trade, then display the amount of the
 * commission:
 * 
 *  Input:
 *      Enter the value of trade: 30000
 *      Commission: $166.00
 */
#include <stdio.h>

int main(void) {
    float commission, tradeValue;

    printf("Enter the value of the trade: ");
    fflush(stdout);
    scanf("%f", &tradeValue);

    if(tradeValue < 2500.00f) {
        commission = 30 + (0.017f * tradeValue);

        // Minimum commission is $39
        if(commission < 39.00f) {
            commission = 39.00f;
        }
    }
    else if(tradeValue < 6250.00f) {
        commission = 56 + (0.0066f * tradeValue);
    }
    else if(tradeValue < 20000.00f) {
        commission = 76 + (0.0034f * tradeValue);
    }
    else if(tradeValue < 50000.00f) {
        commission = 100 + (0.0022f * tradeValue);
    }
    else if(tradeValue < 500000.00f) {
        commission = 155 + (0.0011f * tradeValue);
    }
    else {
        commission = 255 + (0.0009f * tradeValue);
    }

    printf("Commission: $%.2f\n", commission);
}
