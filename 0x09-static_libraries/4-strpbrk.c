#include "main.h"
/**
  *_strpbrk - entry point
  *@s: input string
  *@accept: input
  *Return: 0 success
  */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
		return (s);
		}
	s++;
	}
return ('\0');
}
