#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *@dest: first string
  *@src: second string
  *@n: bytes from src
  *Return: resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[m] = src[i];
		m++;
		i++;
	}
	return (dest);
}
