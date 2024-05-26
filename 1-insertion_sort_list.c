#include "sort.h"
/**
 * list_swap - a function that swap two nodes in a doubly linked list
 *
 * @node1: a pointer to the first node
 * @node2: a pointer to the second node
 *
 * Return: returns nothing
 *
*/
void list_swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;

	node2->next = node1;
	node1->prev = node2;
}
/**
 * insertion_sort_list -  a function that sorts a doubly linked list
 * of integers in  ascending order using the Insertion sort algorithm
 *
 * @list: a pointer to the doubly linked list to be sorted
 *
 * Return: returns nothing
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			list_swap(temp->prev, temp);
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
