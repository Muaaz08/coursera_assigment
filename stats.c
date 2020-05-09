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
 * @file < Stats.c > 
 * @brief < Week 1 Assignment >
 *
 * In this assignment, various statistics properties
 * such as mean,median, average,max & min etc. on the dataset.
 * Also sort the dataset and print the result
 *
 * @author <Muaaz Musthafa>
 * @date <7/5/2020>
 *
 */

#include <stdio.h>
#include "stats.h"

void main() {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  sort_array(test,SIZE);
  float m = find_median(test,SIZE);
  printf("Median: %.2f \n",m);
  float mean= find_mean(test,40.0);
  printf("Mean: %.4f \n",mean);
  int max = find_maximum(test,SIZE);
  int min = find_minimum(test,SIZE);
  printf("Max: %d,Min: %d\n",max,min);
  print_array(test,SIZE);                      

}

void print_statistics(int minimum, int maximum, float mean, int median){
    printf("%d,\t",minimum);
    printf("%d,\t",maximum);
    printf("%f,\t",mean);
    printf("%d,\t",median);
}

void print_array(int * ptr, int n){
    printf("DataSet:\n");
    for(int i=0; i<n; i++){
        printf("%u,\t",*ptr);
        ++ptr;
    }
}

float find_median(int arr[], int n){
    int x,y;
    if(n%2==0){ //if n is even number
        x= n/2;
        y = x-1;
        return (arr[x] + arr[y])/2.0;
    }else{
        x = (n+1)/2;
        return arr[x-1]; 
    }
}

float find_mean(int arr[],float n){
    int sum;
    float mean;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return mean = sum/n;
}

void sort_array(int arr[], int n){
    for(int i=0; i< n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
} 

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int find_maximum(int arr[],int n){
    // first sort the array then the 1st element
    sort_array(arr,n);
    return arr[0]; 
}

int find_minimum(int arr[],int n){
    // first sort the array then the 1st element
    sort_array(arr,n);
    return arr[n-1]; 
}


