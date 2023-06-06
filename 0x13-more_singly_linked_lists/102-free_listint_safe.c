#include "lists.h"
/**
  *free_listint_safe - frees a listint_t list
  *@h: input
  *Return: freed list element
  */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int i;
	listint_t *t;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
