#include "lists.h"
/**
  *add_nodeint - adds a new node at the beginning of a listint_t list
  *@n: input
  *@head: first node adress
  *Return: new node adress or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
