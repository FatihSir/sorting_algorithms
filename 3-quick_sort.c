#include "sort.h"
/**
 * swap_items - a function to swap two elements
 *
 * @x: the first element
 * @y: the second element
 *
 * Return: return nothing
*/
void swap_items(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
/**
 * partition - a function that divide the array into two parts using pivot
 * where all the elements in the left of the pivot
 * are less and in the right are bigger
 *
 * @array: the array to be partitioned
 * @start: the first index
 * @end : the last index
 *
 * Return: returns the index of the pivot
 */
size_t partition(int *array, size_t start, size_t end)
{
	size_t p_index = start;
	size_t i;
	int pivot = array[end];

	for (i = 0; i <= end - 1  ; ++i)
	{
		if (array[i] <= pivot)
		{
			swap_items(&array[i], &array[p_index]);
			p_index = p_index + 1;
			print_array(array, end + 1);
		}
	}
	swap_items(&array[p_index], &array[end]);
	return (p_index);
}
/**
 * quick_sort - a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: return nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t partition_index;

	if (size < 2)
		return;
	partition_index = partition(array, 0, size - 1);
	quick_sort(array, partition_index);
	quick_sort(array + partition_index + 1, size - partition_index - 1);
}
