#include "main.h"
/**
  *_strcat - function that concatenates two strings
  *@src: string number 1
  *@dest: string number 2
  *Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	return (dest);
}
