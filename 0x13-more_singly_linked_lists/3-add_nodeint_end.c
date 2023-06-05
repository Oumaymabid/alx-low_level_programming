#include "lists.h"
/**
  *add_nodeint_end - dds a new node at the end of a listint_t list
  *@head: input
  *@n: input
  *Return: new node adress or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);

	node->n = n;
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
