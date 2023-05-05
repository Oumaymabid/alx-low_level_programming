#include "main.h"
/**
  *string_toupper - hanges all lowercase letters of a string to uppercase
  *@p: pointer
  *Return: p
  */
char *string_toupper(char *p)
{
	int m;

	m = 0;
	while (p[m] != '\0')
	{
		if (p[m] >= 'a' && p[m] <= 'z')
			p[m] = p[m] - 32;
		m++;
	}
	return (p);
}
