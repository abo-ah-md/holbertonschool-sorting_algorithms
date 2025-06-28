#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * partition - Partitions an array segment around a pivot for Quick Sort
 *using the Lomuto partition scheme
 * @array: Pointer to the array to partition
 * @low: Starting index of the segment to partition
 * @high: Ending index of the segment; also the pivot index
 * @size: Number of elements in the array
 * Return: The final index of the pivot element after partitioning
 * Description: The function selects the element at index @high as the pivot.
 * It rearranges the segment so that all elements less than the pivot are
 * to its left, and all greater elements are to its right.
 */
int partition(int *array, int low, int high, size_t size)
{

int temp;
int i;
int j;
for (i = low - 1, j = low; j < high; j++)
{
if (array[j] < array[high])
{
i++;
if (i != j)
{
temp = array[j];
array[j] = array[i];
array[i] = temp;
print_array(array, size);
}
}
}
if (i + 1 != high)
{
temp = array[i + 1];
array[i + 1]  = array[high];
array[high] = temp;
print_array(array, size);
}
return (i + 1);
}
/**
 * _quick_sort - Recursively sorts a portion of an array using Quick Sort
 * algorithm (Lomuto partition scheme).
 * @array: Pointer to the array to sort
 * @low: Starting index of the sub-array to sort
 * @high: Ending index of the sub-array to sort
  * @size: Number of elements in the array
 * Description: This is a helper function that recursively sorts the array
 * between the given low and high indices. It is not meant to be called
 * directly outside the quick_sort wrapper function.
 */
void _quick_sort(int *array, int low, int high, size_t size)
{
if (low < high)
{
int p = partition(array, low, high, size);
_quick_sort(array, low, p - 1, size);
_quick_sort(array, p + 1, high, size);
}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick Sort algorithm (Lomuto partition scheme)
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 *
 * Description: This is the main entry point for the quick sort algorithm.
 * It checks for NULL or small arrays before calling the recursive sorter.
 */
void quick_sort(int *array, size_t size)
{
_quick_sort(array, 0, size - 1, size);
}
