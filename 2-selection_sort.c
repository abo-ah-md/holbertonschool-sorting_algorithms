#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *selection_sort - simple selection sorting algo
 *@array: array to sort
 *@size: size of the array
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, j;
int min, temp = 0;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{

if (array[j] < array[min])
min = j;

}

temp = array[i];
array[i] = array[min];
array[min] = temp;
if (min != (int)i)
print_array(array, size);
}
}
