#include "main.h"
/**
  *_strncat - function that concatenate two strings
  *@dest: input
  *@src: input
  *@n: input
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int l;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[m] = src[l];
	m++;
	l++;
	}
	dest[m] = '\0';
	return (dest);
}
