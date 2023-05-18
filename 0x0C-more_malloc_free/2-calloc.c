#include "main.h"
#include <stdlib.h>
/**
  *_memset -  sets memory to 0
  *@m: memory area
  *@c: input
  *@n: input
  *Return: pointer
  */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}
	return (m);
}

/**
  *_calloc - allocates memory for an array of nmemb elements of size bytes
  *@nmemb: input
  *@size: input
  *Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
