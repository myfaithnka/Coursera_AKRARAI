/**
 * @file stats.h 
 * @brief This file contains the functions declarations and a description of there inputs and outputs 
 *
 * @author MOHAMED AKRARAI
 * @date October 29th, 2017 
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * @param Dataset Array of type Char.
 *
 * @return It's a void methods. It does no return anything!!
 */

void print_statistics(unsigned char *ptr);

/**
 * @brief A function that prints the array elements.
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return It's a void methods. It does no return anything!!
 */


void print_array(unsigned char *ptr, int length);

/**
 * @brief A function that calculates the median of an array of numbers/ Dataset or whatever you want to call it.
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return a float
 */


float find_median(unsigned char *ptr , int length);

/**
 * @brief A function that calculates the mean of an array of numbers/ Dataset or whatever you want to call it.
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return a float
 */


float find_mean(unsigned char *ptr, int length);

/**
 * @brief A function that calculates the maximum of an array of numbers/ Dataset or whatever you want to call it.
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return an Integer
 */


int find_maximum(unsigned char *ptr, int length);

/**
 * @brief A function that calculates the minimum of an array of numbers/ Dataset or whatever you want to call it.
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return an Integer
 */

int find_minimum(unsigned char *ptr, int length);

/**
 * @brief A function that sorts the elements of the input array.  The zeroth Element is the largest value, and the last element   *          (n-1) is the smallest value. ).
 *
 *
 *
 * @param Dataset Array of type Char.
 * @param The length of the array of type Integer
 *
 * @return an array of type Integer.
 */

unsigned char *sort_array(unsigned char *ptr, int length);//C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.


#endif /* __STATS_H__ */
