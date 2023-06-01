#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  *add_node - adds a new node at the beginning of a list_t
  *@head: input
  *@str: input
  *Return: address or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
	len++;
	node = malloc(sizeof(list_t));
	if (!node)
	return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
