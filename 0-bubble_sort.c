#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *bubble_sort - simple bubble sort algo
 *@array: array to sort
 *@size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int check_swap;
int temp;

for (i = 0; i < size - 1; i++)
{

check_swap = 0;

for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

check_swap = 1;
print_array(array, size);
}
}

if (check_swap == 0)
break;

}
}
