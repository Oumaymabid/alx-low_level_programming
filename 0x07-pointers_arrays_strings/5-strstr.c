#include "main.h"
/**
  *_strstr -  locates a substring
  *@needle: input
  *@haystack: input
  *Return: 0 success
  */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
