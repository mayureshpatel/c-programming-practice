/**
 * @file tprint.c
 * @author Mayuresh Patel
 * @brief Using printf to print numbers
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 * The following program illustrates the use of printf to print
 * integers and floating-point numbers in various formats.
 */
#include <stdio.h>

int main(void)
{
    int i = 34;
    int j = 540;
    float x = 190.30f;
    float y = 4432225873884.338f;

    /**
     * Using printf and conversion specifications
     * ----------------------------------------------------------------------------
     * - Conversion specifications follow the following form:
     * 
     *          %m.pX
     * 
     *   where m represents the minimum field width, p represents the precision,
     *   and X represents the conversion specifier.
     * 
     * - %d is a conversion specifier that displays an integer in decimal form.
     * - %f is a conversion specifier that displays a floating-point number in
     *      fixed-decimal format.
     * - %e is a conversion specifier that displays a floating-point number in
     *      exponential format.
     * - %g is a conversion specifier that displays a floating-point number in
     *      either exponential format or fixed decimal format, depending on the size
     *      of the number.
     * 
     * - m speficies the minimum number of characters to print, and the value to
     *      be printed is right-justified by default. It can be left-justified by
     *      pre-pending a '-' sign.
     * 
     * - The modification behavor of p depends on X, the conversion specifier.
     *      - for %d, p defines the minimum number of digits to display. The default
     *          is .1, which does not pre-pend any 0's.
     *      - for %f, %e, and %g, p defines the number of number of digits after the
     *          decimal point.
     */
    printf("Using %%d for int: %d\n", i);
    printf("Using %%f for int: %f\n\n", i);     // unintended output b/c incompatible type

    printf("Using %%d for float: %d\n", x);     // unintended output b/c incompatible type
    printf("Using %%f for float: %f\n\n", x);

    printf("Using %%f for float: %f\n", y);
    printf("Using %%e for float: %e\n", y);
    printf("Using %%g for large float: %g\n", y);
    printf("Using %%g for small float: %g\n\n", x);

    printf("Using m Modifier for int: %10d\n", i);
    printf("Using m Modifier for int: %10d\n", j);
    printf("Using m Modifier for float: %10f\n", x);    // no effect b/c float value has total of 10 characters
    printf("Using m Modifier for float: %10f\n\n", y);    // no effect b/c float value has more than 10 characters

    printf("Using p Modifier for int: %.5d\n", i);
    printf("Using p Modifier for float: %.3f\n", x);
    printf("Using p Modifier for float: %.4e\n", x);
    printf("Using p Modifier for float: %.2g\n", y);

    return 0;
}