/**
 * @file p_3_5.c
 * @author Mayuresh Patel
 * @brief Magic Square Formatting
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * Write a program that asks the user to enter the numbers from 1 to 16
 * (in any order) and then displays the numbers in a 4 x 4 arrangement,
 * followed by the sums of the rows, columns, and diagonals:
 * 
 *  Input:
 *      Enter the numbers from 1 - 16 in any order:
 *      16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 * 
 *  Output:
 *      16  3  2 13
 *       5 10 11  8
 *       9  6  7 12
 *       4 15 14  1
 * 
 *      Row sums: 34 34 34 34
 *      Column sums: 34 34 34 34
 *      Diagonal sums: 34 34
 */
#include <stdio.h>

int main(void) {
    // I am assuming that I do not have the knowledge of arrays at this point
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16;
    int rowSum1, rowSum2, rowSum3, rowSum4;
    int columnSum1, columnSum2, columnSum3, columnSum4;
    int diagonalSum1, diagonalSum2;

    printf("Enter the numbers from 1 - 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12, &v13, &v14, &v15, &v16
    );

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
        v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16
    );
    
    // Calculate the row, column, and diagonal sums
    rowSum1 = v1 + v2 + v3 + v4;
    rowSum2 = v5 + v6 + v7 + v8;
    rowSum3 = v9 + v10 + v11 + v12;
    rowSum4 = v13 + v14 + v15 + v16;

    columnSum1 = v1 + v5 + v9 + v13;
    columnSum2 = v2 + v6 + v10 + v14;
    columnSum3 = v3 + v7 + v11 + v15;
    columnSum4 = v4 + v8 + v12 + v16;

    diagonalSum1 = v1 + v6 + v11 + v16;
    diagonalSum2 = v4 + v7 + v10 + v13;

    // Print out the row, column, and diagonal sums
    printf("\nRow Sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);
    printf("Column Sums: %d %d %d %d\n", columnSum1, columnSum2, columnSum3, columnSum4);
    printf("Diagonal Sum: %d %d\n", diagonalSum1, diagonalSum2);

    return 0;
}