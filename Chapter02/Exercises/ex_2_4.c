/**
 * @file ex_2_4.c
 * @author Mayuresh Patel
 * @brief Variables, initialized and not
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that declares several int and float variables - without
 * initializing them - and then prints their values. Is there any pattern
 * to the values? (Usually there isn't).
 */
#include <stdio.h>

int main(void)
{
    // Declare int and float variables
    float balance, interestRate;
    int accountNumber, accountType, accountAge, userAge;

    // Assign values to the variables
    balance = 1520.30f;
    interestRate = 0.03f;

    accountNumber = 10001;
    accountType = 2;
    accountAge = 3;
    userAge = 25;

    // Print out information on the variables
    printf("Account Number: %d\n", accountNumber);
    printf("Account Type: %d\n", accountType);
    printf("Account Balance: %.2f\n", balance);
    printf("Interest Rate: %.2f\n", interestRate);
    printf("Account Age: %d\n", accountAge);
    printf("User Age: %d\n", userAge);

    return 0;
}
