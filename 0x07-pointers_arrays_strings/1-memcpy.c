#include "main.h"
/**
  *_memcpy - copies memory area
  *@n: bytes to be copied
  *@src: memory are one
  *@dest: memory area two
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int m = n;

	for (l = 0; l < m; l++)
	{
		dest[l] = src[m];
		n--;
	}
	return (dest);
}
