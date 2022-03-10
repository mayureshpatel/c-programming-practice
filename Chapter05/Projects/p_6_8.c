/**
 * @file p_6_8.c
 * @author Mayuresh Patel
 * @brief Closest Flight
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * The following table shows the daily flights from one city to another:
 * 
 *      Departure Time              Arrival Time
 *      8:00 am                     10:16 am
 *      9:43 am                     11:52 am
 *      11:19 am                    1:31 pm
 *      12:47 pm                    3:00 pm
 *      2:00 pm                     4:08 pm
 *      3:45 pm                     5:55 pm
 *      7:00 pm                     9:20 pm
 *      9:45 pm                     11:58 pm
 * 
 * Write a program that asks user to enter a time (expressed in hours and
 * minutes, using 24-hour clock). The program then displays the departure and
 * arrival times for the flight whose departure tie is closest to that entered
 * by the user:
 * 
 *  Input:
 *      Enter a 24-hour time: 13:15
 *  
 *  Output:
 *      Closest deaprture time is 12:47 pm, arriving at 3:00 pm
 * 
 * HINT: Conver the input into a time expressed in minutes since midnight, and
 * compare it to the departure times, also expressed in minutes since midnight.
 * For example, 13:15 is 13 * 60 + 15 = 795 minutes since midnight, which is closer
 * to 12:47 pm (767 minutes since midnight) than to any of the other departure
 * times.
 */