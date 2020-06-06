/******************************************************************************
 * Copyright (C) 2020 by GP Haranraj
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Carl Dawson is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header file for assignment C1M1 - stats
 *
 * Implements various rudimentary functions for exploring numerical data
 *
 * @author GP Haranraj
 * @date 6 June 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints statistics of an array
 *
 * A function that prints the statistics of an array including 
 * minimum, maximum, mean and median. 
 *
 * @param data the array to be analysed 
 * 
 * @return void 
 */
void print_statistics(unsigned char * data);

/**
 * @brief Prints an array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param data the array
 * @param length the length of the array 'data'
 * 
 * @return void 
 */
void print_array(unsigned char * data, unsigned int length);

/**
 * @brief returns the median value
 *
 * Given an array of data and a length, returns the median value
 *
 * @param data the array to be analysed
 * @param length the length of the array 'data'
 * 
 * @return the median value of 'data'
 */
float find_median(unsigned char * data, unsigned int length);

/**
 * @brief returns the mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param data the array to be analysed
 * @param length the length of the array 'data'
 * 
 * @return the mean value of 'data'
 */
float find_mean(unsigned char * data, unsigned int length);

/**
 * @brief returns the maximum value
 *
 * Given an array of data and a length, returns the maximum value
 *
 * @param data the array to be analysed
 * @param length the length of the array 'data'
 * 
 * @return the maximum value of 'data'
 */
unsigned int find_maximum(unsigned char * data, unsigned int length);

/**
 * @brief returns the minimum value
 *
 * Given an array of data and a length, returns the minimum value
 *
 * @param data the array to be analysed
 * @param length the length of the array 'data'
 * 
 * @return the minimum value of 'data'
 */
unsigned int find_minimum(unsigned char * data, unsigned int length);

/**
 * @brief sorts an array
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest. (The zeroth Element is the largest value, and the last
 * element (n-1) is the smallest value.)
 *
 * @param data the array to be analysed
 * @param length the length of the array 'data'
 * 
 * @return a pointer to the sorted array
 */
unsigned char* sort_array(unsigned char * data, unsigned int length);

#endif /* __STATS_H__ */