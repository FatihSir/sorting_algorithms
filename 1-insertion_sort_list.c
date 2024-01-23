#include "sort.h"
/**
 * swap_list - a function that swaps two nodes
 *
 * @a: pointer to the first node
 * @b: pointer to the second node
 *
 * Return: returns nothing
*/
void swap_list(listint_t *a, listint_t *b)
{
	if (b->next != NULL)
	{
		b->next->prev = a;
	}
	if (a->prev != NULL)
	{
		a->prev->next = b;
	}
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: Double pointer to the head of the list
 *
 * Return: returns nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *outer, *inner;

	if ((*list)->next == NULL || *list == NULL || list == NULL)
		return;
	inner = (*list)->next;
	while (inner)
	{
		outer = inner;
		inner = inner->next;
		while (outer->prev && outer)
		{
			if (outer->prev->n > outer->n)
			{
				swap_list(outer->prev, outer);
				if (!outer->prev)
					*list = outer;
				print_list((const listint_t *) *list);
			}
			else
			{
				outer = outer->prev;
			}
		}
	}
}
