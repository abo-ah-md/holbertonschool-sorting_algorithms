#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void swap(int *from,int *to)
{
  int *temp;

  temp = from;
  from = to;
  to = temp;
  
}

/**
 *buble_sort - simple bubble sort algo
 *@array: array to sort 
 *@size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
  size_t i,j,s = size;
  /*int check_swap = 0;*/
  int temp;
  
  for (i = 0; i < s; i++)
    {

	
      for (j = 0 ; j < s - i - 1; j++)
	{
         if (array[j] > array[j+1])
	   {
	     temp = array[j];
	     array[j] = array[j+1];
	     array[j+1] = temp;

	     /* check_swap = 1;*/
	     print_array(array,size);
	   }
        }
     }
}
