/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Header for stats.c file>
 *
 * <Here function declaration of mean,median,max,min,average>
 *
 * @author <Muaaz Musthafa>
 * @date <07-05-2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Size of the Data Set */
#define SIZE (40)

/* @brief This function print the results of the calculations
 * @param minimum,maximum, mean & median
 * @return the result for  minimum,maximum, mean & median
 * 
 */
void print_statistics(int minimum, int maximum, float mean, int median);

/* @brief This function print the array
 * @param ptr for the array
 * @param n for size of the array 
 * @return print the values of the array
 * */
void print_array(int * ptr, int n);

/* @brief This function finds the median from the given array 
 * @param ptr for the array
 * @param n for size of the array 
 * @return the values of the median
*/
float find_median(int arr[],int n);

/* @brief This function finds the mean from the given array 
 * @param ptr for the array
 * @param n for size of the array 
 * @return the values of the mean
*/
float find_mean(int arr[],float n);

/* @brief This function is used to swap two numbers
 * @param two pointers
 * @return the result after swapping
*/
void swap(int *a,int *b);

/* @brief This function sort the array in descending order
 * @param ptr for the array
 * @param n for size of the array 
*/
void sort_array(int arr[],int n);

/* @brief This function finds the maximum from the given array 
 * @param ptr for the array
 * @param n for size of the array 
 * @return the values of the maximum
*/
int find_maximum(int arr[],int n);

/* @brief This function finds the minimum from the given array 
 * @param ptr for the array
 * @param n for size of the array 
 * @return the values of the minimum
*/
int find_minimum(int arr[],int n);


#endif /* __STATS_H__ */
