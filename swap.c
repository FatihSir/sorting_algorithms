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
