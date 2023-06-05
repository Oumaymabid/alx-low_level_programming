#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n)
 *@head: input
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum = sum + t->n;
		t = t->next;
	}
	return (sum);
}
