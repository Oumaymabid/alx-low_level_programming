#include "function_pointers.h"
#include <stdlib.h>
/**
  *int_index - searches for an integer
  *@array: input
  *@size: input
  *@cmp: input
  *Return: 0 success
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
