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
 * @file stats.c 
 * @ Display Statistics of an array
 *
 * Basically used to represent statistics of an array
 *
 * @author Dennis Joseph
 * @date 2/11/2021
 *
 */



#include <stdio.h>
#include "stats.h"
#include <math.h>
/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("The actual array is \n");
  print_array(test,SIZE);
  printf("Statistics \n");
  print_statistics(test,SIZE);
/* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_array(unsigned char *a,int size)
{
    for(int i=0;i<size;++i)
        printf("%d ",a[i]);
    printf("\n");
}

int find_mean(unsigned char *a,int size)
{
    int sum=0;
    int mean_array;
    for(int i=0;i<size;++i)
        sum+=a[i];
    mean_array=round(sum/size);
    return mean_array;
}

unsigned char find_maximum(unsigned char *a,unsigned int size)
{
    int max=a[0];
    for(int i=0;i<size;i++)
        if(a[i]>max)
           max=a[i];
    return max;
}

unsigned char find_minimum(unsigned char *a,unsigned int size)
{
    int min=a[0];
    for(int i=0;i<size;i++)
        if(a[i]<min)
            min=a[i];
    return min;
}

void swap(unsigned char * a,unsigned char * b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void sort_array(unsigned char* a,int size)
{
    for(int i=0;i<size;++i)
        for (int j=0;j<size-1;++j)
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
}

unsigned char find_median(unsigned char *a,unsigned int size)
{
    sort_array(a,size);
    if (size%2==1)
        return(a[size/2]);
    else
        return(round((a[size/2]+a[(size/2)-1])/2));
}

void print_statistics(unsigned char *a,unsigned int size)
{
    printf("The median of the 1D array is %d \n",find_median(a,size));
    printf("The mean of the 1D array is %d \n", find_mean(a,size));
    printf("The maximum of the 1D array is %d \n", find_maximum(a,size));
    printf("The minimum of the 1D array is %d \n", find_minimum(a,size));
    printf("The sorted array is \n");
    print_array(a,size);
}


/* Add other Implementation File Code Here */
