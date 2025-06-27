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
  listint_t *check, *back, *temp, *next;
  check = (*list)->next;  
  
  while (check)
    { 
      next = check->next; 
      
     if (check->n < check->prev->n)
	{
	  temp = check;

	  if (temp->next)
	  temp->next->prev = temp->prev;
	  temp->prev->next = temp->next;

	  back = temp->prev; 

	  while ( temp->n < back->n && back->prev)
	    {
	      back = back->prev;
	    }

	  if(temp->n < back->n)
	    {
	      temp->prev = NULL;
	      temp->next = back;
	      back->prev = temp;
	      *list = temp;
	    }
	  else
	    {

	  temp->prev = back;
	  temp->next = back->next;

	  if(back->next)
	  back->next->prev = temp;
	  back->next = temp;
	    }
	  

	}
    check = next;
     
    }
  
}
