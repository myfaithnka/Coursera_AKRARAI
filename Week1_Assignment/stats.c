/**
 * @file stats.c
 * @brief this code calculates the mean, median, maximum and minimum of a given array
 *
 *
 * @author MOHAMED AKRARAI
 * @date   October 29th, 2017
 *
 */
#include <stdio.h>
#include "stats.h"
#include <stdio.h>
/* Size of the Data Set */

#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test);
  
}

void print_statistics(unsigned char *ptr){
  
  printf("This our Initial array: \n");
  
  print_array(ptr, SIZE);

  printf("\n");

  printf("This is our sorted array:\n");

  print_array(sort_array(ptr,SIZE), SIZE);

  printf("\n");

  printf("This the Median:\n");

  printf("%f\n",find_median(sort_array(ptr,SIZE),SIZE));

  printf("The mean:\n");

  printf("%f\n",find_mean(sort_array(ptr,SIZE),SIZE));

  printf("The maximum:\n");

  printf("%d \n",find_maximum(sort_array(ptr,SIZE),SIZE));

  printf("The minimum\n");

  printf("%d \n",find_minimum(sort_array(ptr,SIZE),SIZE));

  printf("\n");

}

void print_array(unsigned char *ptr, int length){

  int i;

  for(i=0;i<length;i++){

     printf("%d ",*(ptr+i));
    
  }

}

float find_median(unsigned char *ptr , int length){

  float Median;

  Median = ( (*(ptr+19))+(*(ptr+20)) )/2;   

  return Median;
}

float find_mean(unsigned char *ptr, int length){
  
  int sum,i;

  sum = 0;

  for(i=0;i<length;i++){
  
    sum += *ptr;
    
    ptr++;

  }

  return (sum / length)  ;
}

int find_maximum(unsigned char *ptr, int length){

// I toke advantage of the sorted array

 return *ptr;
}

int find_minimum(unsigned char *ptr, int length){
 

  // I toke advantage of the sorted array

 return *(ptr+39);

}

unsigned char *sort_array(unsigned char *ptr, int length){
  
  unsigned char *p;

  p = ptr;
  
  unsigned char a,i,j;

      for (i = 0; i < SIZE; ++i){

        for (j = i + 1; j < SIZE; ++j){

            if (*(p+i) < *(p+j)){

                a =  *(p+i);

                *(p+i) = *(p+j);

                *(p+j) = a;

            }
        }
      }

  return p;
}
