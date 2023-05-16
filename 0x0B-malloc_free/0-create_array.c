#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars, with a specific char
  *@size: input
  *@c: input
  *Return: pointer or NULL
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
