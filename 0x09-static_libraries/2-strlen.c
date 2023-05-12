#include "main.h"
/**
  *_strlen - prints the string's length
  *@s: input
  *Return: length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
