#include "main.h"
/**
  *_memset - fills memory with a constant byte
  *@n: bytes of the memory area pointed to
  *@s: input
  *@b: constant byte
  *Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
