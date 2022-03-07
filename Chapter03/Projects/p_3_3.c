/**
 * @file p_3_3.c
 * @author Mayuresh Patel
 * @brief Decoding ISBN
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Books are identified by an International Standard Book Number (ISBN). ISBNs
 * assigned after 2006 contain 13 digits, arranged in five groups, such as
 * 
 *         ISBN 978-0-393-97950-3.
 * 
 * The first group (GS1 prefix) is currently either 978 or 979. The group identifier
 * specifies the language or country of origin (for example, 0 and 1 are used in
 * English-speaking countries). The publisher code identifies the publisher. The
 * item number is assigned by the publisher to identify a specific book. An ISBN
 * ends with a check digit that's used to verify the accuracy of the preceding
 * digits. Write a program that breaks down an ISBN entered by the user:
 * 
 *  Input:
 *      Enter ISBN : 978-0-393-97950-3
 * 
 *  Output:
 *      GS1 prefix: 978
 *      Group Identifier: 0
 *      Publisher Code: 393
 *      Item Code: 97950
 *      Check Digit: 3      
 */
#include <stdio.h>

int main(void) {
    // lvalues - memory locations where rvalues will be stored
    int gs1Prefix, groupId, publisherId, itemId, checkDigit;

    // using scanf, the user enters rvalues to be assigned to lvalues declared above
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupId, &publisherId, &itemId, &checkDigit);

    printf("\nGS1 Prefix: %d\n", gs1Prefix);
    printf("Group Identifier: %d\n", groupId);
    printf("Publisher Code: %d\n", publisherId);
    printf("Item Code: %d\n", itemId);
    printf("Check Digit: %d\n", checkDigit);

    return 0;
}