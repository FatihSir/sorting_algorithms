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
 * selection_sort -  a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: a pointer to the array to be sorted
 * @size: the size of the array to be sorted
 *
 * Return: returns nothing
*/
void selection_sort(int *array, size_t size)
{
	int *ptr = array;
	int temp;
	size_t i, j, index;

	for (i = 0; i < size - 2; ++i)
	{
		temp = ptr[i];
		for (j = i + 1; j < size; ++j)
		{
			if (ptr[j] < temp)
			{
				temp = ptr[j];
				index = j;
			}
		}
		if (ptr[index] < ptr[i])
		{
			swap(&ptr[i], &ptr[index]);
			print_array(array, size);
		}
	}
}
