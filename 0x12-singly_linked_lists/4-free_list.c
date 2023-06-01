#include "lists.h"
#include <stdlib.h>
#include <strings.h>
/**
  *free_list -  frees a list_t list
  *@head: input
  */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
	t = head->next;
	free(head->str);
	free(head);
	head = t;
	}
}
