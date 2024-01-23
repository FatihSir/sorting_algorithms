#include "sort.h"
#include <stdbool.h>
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

	int swap_flag = 0;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; ++i)
	{
		swap_flag = 0;
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swap_flag = 1;
				print_array(array, size);
			}
		}
		if (swap_flag == 0)
			break;
	}
}
