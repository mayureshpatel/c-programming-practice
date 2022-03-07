/**
 * @file p_4_6.c
 * @author Mayuresh Patel
 * @brief European Article Number
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * European countries use a 13-digit code, known as a European Article Number
 * (EAN) instead of the 12-digit Universal Product Code (UPC). Each EAN
 * ends with a check digit, just as a UPC does. The technique for
 * calculating the check digit is also similar:
 * 
 *      Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
 *      Add the first, third, fifth, seventh, ninth, and eleventh digits.
 *      Multiply the first sum by 3 and add it to the second sum.
 *      Subtract 1 from the total.
 *      Compute the remainder when the adjusted total is divided by 10.
 *      Subtract the remainder from 9.
 */