#include <stdlib.h>
#include "lists.h"
/**
  *list_len - returns the number of elements in a linked list_t
  *@h: input
  *Return: elements in list_t
  */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
	j++;
	h = h->next;
	}
	return (j);
}