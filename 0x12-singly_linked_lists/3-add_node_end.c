#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node_end - adds a new node at the end of a list_t list
  *@head: input
  *@str: input
  *Return: adress or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	node = malloc(sizeof(list_t));
	if (!node)
	return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
	*head = node;
	return (node);
	}
	while (t->next)
	t = t->next;
	t->next = node;
	return (node);
}
