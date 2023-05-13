#include "main.h"
/**
  *_memcpy -  copies memory area
  *@dest: input
  *@src: input
  *@n: bytes
  *Return: memory with n bytes changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
