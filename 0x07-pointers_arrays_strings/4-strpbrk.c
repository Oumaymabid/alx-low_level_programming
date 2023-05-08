#include "main.h"
/**
  *_strpbrk -  locates the first occurrence in the string s (string accept)
  *@s: input
  *@accept: input
  *Return: 0 success
  */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			return (s);
		}
		s++;
	}
	return ('\0');
}
