#include "main.h"
/**
  *char *_strcpy - copies a string
  *@dest: input
  *@src: input
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int r = 0;
	int d = 0;

	while (*(src + r) != '\0')
	{
		r++;
	}
	for ( ; d < r ; d++)
	{
		dest[d] = src[d];
	}
	dest[r] = '\0';
	return (dest);
}
