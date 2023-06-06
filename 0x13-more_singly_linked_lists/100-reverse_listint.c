#include "lists.h"
/**
  *reverse_listint - reverses a listint_t linked list
  *@head: input
  *Return: 1st node adress
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
