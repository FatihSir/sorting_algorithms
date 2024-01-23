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
 *  bubble_sort - a function that sorts an array of integers in
 *  ascending order using the Bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: return nothing
 *
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_flag;

	if (size < 2 || array == NULL || !size)
		return;
	for (i = 0; i < size - 1; ++i)
	{
		swap_flag = 0;
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap_items(&array[j], &array[j + 1]);
				swap_flag = 1;
				print_array(array, size);
			}
		}
		if (swap_flag == 0)
			break;
	}
}
