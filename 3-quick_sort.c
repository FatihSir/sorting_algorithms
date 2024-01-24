#include "sort.h"

/**
 * swap - a function to swap two elements
 *
 * @x: the first element
 * @y: the second element
 *
 * Return: return nothing
*/

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - divide the array
 *
 * @array: array to be used
 * @size: size of the array
 *
 * Return: an integer
 */

int partition(int *array, size_t size)
{
	size_t lb = 0;
	size_t ub = size - 1;
	int pivot = array[lb];
	size_t start = lb;
	size_t end = ub;

	while (start < end)
	{
		while (array[start] <= pivot)
		{
			start++;
		}
		while (array[end] > pivot)
		{
			end--;
		}
		if (start < end)
		{
			swap(&array[start], &array[end]);
			print_array(array, size);
		}
	}
	swap(&array[lb], &array[end]);
	print_array(array, size);
	return (end);
}
/**
 * quick_sort - a function that sorts an array of integers 
 * in ascending order using the Quick sort algorithm
 *
 * @araay: array to be used for sorting
 * @size: size of the array
 *
 * Return: return nothing
 */

void quick_sort(int *array, size_t size)
{
	size_t lb = 0;
	size_t ub = size - 1;

	if (size > 1)
	{
		int loc = partition(array, size);

		if (loc > 0)
		{
			quick_sort(array, loc);
		}
		if (loc + 1 < size - 1)
		{
			quick_sort(array + loc + 1, size - loc - 1);
		}
	}
}
