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
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
