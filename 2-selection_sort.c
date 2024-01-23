#include <stdio.h>
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
 *  selection_sort - a function that sorts an array of integers in
 *  ascending order using the selection sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: return nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	size_t min_val;

	for (i = 0; i < size - 1; i++)
	{
		min_val = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_val] > array[j])
			{
				min_val = j;
			}
		}
		if (min_val != i)
		{
			swap_items(&array[i], &array[min_val]);
			for (k = 0; k < size; k++)
			{
				if (k < size - 1)
				{
					printf("%d, ", array[k]);
				}
				else
				{
					printf("%d", array[k]);
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}
