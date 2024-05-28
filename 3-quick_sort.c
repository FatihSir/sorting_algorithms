#include "sort.h"
/**
 * swap - a function to swap two elements
 *
 * @a: a pointer to the first element
 * @b: a pointer to the second element
 *
 * Return: returns nothing
 *
*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - a function makes partitions of a given array
 *
 * @array: a pointer to the array t be sorted
 * @first: the index of the first element in the array
 * @last: the index of the last element in the array
 * @size: the size of the array
 *
 * Return: the index of the pivot
 *
*/

size_t partition(int *array, size_t first, size_t last, size_t size)
{
	size_t i = first - 1, j, pivot = last;

	for (j = first; j < pivot; ++j)
	{
		if (array[j] <= array[pivot])
		{
			i = i + 1;
			if (i != j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
	i = i + 1;
	if (i != pivot)
	{
		swap(&array[i], &array[pivot]);
		print_array(array, size);
	}
	return (i);
}
/**
 * quick_sort_helper - a function that helps in recursion process
 *
 * @array: a pointer to the array t be sorted
 * @first: the index of the first element in the array
 * @last: the index of the last element in the array
 * @size: the size of the array
 *
 * Return: returns nothing
 *
*/
void quick_sort_helper(int *array, size_t first, size_t last, size_t size)
{
	size_t pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		if (pivot > 0)
		{
			quick_sort_helper(array, first, pivot - 1, size);

		}
		quick_sort_helper(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: a pointer to the array t be sorted
 * @size: the size of the array
 *
 * Return: returns nothing
 *
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}
