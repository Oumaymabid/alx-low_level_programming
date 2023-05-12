#include "main.h"
/**
  *_memset - fills block of memory with value
  *@s: string input
  *@b: value
  *@n: bytes to change
  *Return: array with new value n
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
