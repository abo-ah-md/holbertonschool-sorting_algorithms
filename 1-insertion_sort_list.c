#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *insertion_sort_list - simple insertion sorting algo
 *@list: list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	current = (*list)->next;

	while (current)
	{
		next = current->next;
		prev = current->prev;

		while (prev && current->n < prev->n)
		{

			if (current->next)
				current->next->prev = prev;
			prev->next = current->next;

			current->prev = prev->prev;
			current->next = prev;

			if (prev->prev)
				prev->prev->next = current;
			prev->prev = current;

			if (!current->prev)
				*list = current;

			print_list(*list);

			prev = current->prev;
		}
		current = next;
	}
}
