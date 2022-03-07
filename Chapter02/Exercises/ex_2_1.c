/**
 * @file ex_2_1.c
 * @author Mayuresh Patel
 * @brief Check for errors in 'Hello World'
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");

    /**
     * @brief compiler error
     * Running this code using C89, an warning is returned
     * because:
     * 
     *      warning: control reaches end of non-void function [-Wreturn-type]
     * 
     * This basically means that the function has a path through it where
     * it ends without actually returning data of the type declared in
     * the function declaration. This warning isn't thrown in C99 and above.
     */

    /* Adding the following line will get rid of the error */
    return 0;
}