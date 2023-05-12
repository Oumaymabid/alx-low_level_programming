#include "main.h"
#include <stddef.h>
/**
  *_strchr - entry point
  *@s: string input
  *@c: char input
  *Return: 0 success
  */
char *_strchr(char *s, char c)
{
	int j;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
