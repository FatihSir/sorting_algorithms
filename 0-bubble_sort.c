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
 * bubble_sort -  a function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: a pointer to the array that will be sorted
 * @size: the size of the array
 *
 * Return: returns nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_flag;

	if (array == NULL)
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
