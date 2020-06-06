#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  puts("####ARRAY####");
  print_array(test, SIZE);
  puts("\n####SORTED ARRAY####");
  print_array(sort_array(test, SIZE), SIZE);
  puts("\n####STATISTICS####");
  print_statistics(test);
  /* Other Variable Declarations Go Here */
}

void print_statistics(unsigned char * data){
  printf("Median  = %.1f\n", find_median(data, SIZE));
  printf("Mean    = %.3f\n", find_mean(data, SIZE));
  printf("Maximum = %d\n", find_maximum(data, SIZE));
  printf("Minimum = %d\n", find_minimum(data, SIZE));
}

void print_array(unsigned char * data, unsigned int length){
  for(int ii=0; ii<length; ii++){
    if(ii == length-1){
      printf("%d\n", data[ii]);
    }else{
      printf("%d,", data[ii]);
    }
  }
}

float find_median(unsigned char * data, unsigned int length){
  data = sort_array(data, length);
  float median;
  if(SIZE % 2 == 0){
    median = (data[length/2] + data[(length/2)-1])/2.0;
  }else{
    median = data[length/2];
  }
  return median;
}
  
float find_mean(unsigned char * data, unsigned int length){
  float sum = 0.0;
  for(int ii=0; ii<length; ii++){
    sum += data[ii];
  }
  return sum/length;
}

unsigned int find_maximum(unsigned char * data, unsigned int length){
  unsigned int maximum = 0;
  for(int ii=0; ii<length; ii++){
    if(data[ii] > maximum){
      maximum = data[ii];
    }
  }
  return maximum;
}
  
unsigned int find_minimum(unsigned char * data, unsigned int length){
  unsigned int minimum = data[0];
  for(int ii=1; ii<length; ii++){
    if(data[ii] < minimum){
      minimum = data[ii];
    }
  }
  return minimum;
}

unsigned char* sort_array(unsigned char * data, unsigned int length){
  /* simple bubble sort implementation */
  for(int ii=length-1; ii>=0; ii--){
    for(int jj=0; jj<ii; jj++){
      if(data[jj]>data[jj+1]){
        unsigned char temp = data[jj];
        data[jj] = data[jj+1];
        data[jj+1] = temp;
      }
    }
  }  
  return data;
}
