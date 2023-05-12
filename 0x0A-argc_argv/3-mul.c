#include <stdio.h>
#include "main.h"

/**
  *_atoi - converts string to integer
  *@s: input string
  *Return: integer
  */
int _atoi(char *s)
{
	int m, n, j, leng, l, dig;

	m = 0;
	n = 0;
	j = 0;
	leng = 0;
	l = 0;
	dig = 0;

	while (s[leng] != '\0')
		leng++;
	while (m < leng && l == 0)
	{
		if (s[m] == '-')
			++n;
		if (s[m] >= '0' && s[m] <= '9')
		{
			dig = s[m] - '0';
			if (n % 2)
				dig = -dig;
			j = j * 10 + dig;
			l = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			l = 0;
		}
		m++;
	}
	if (l == 0)
		return (0);
	return (j);
}

/**
  *main - multiplies numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 or 1
  */
int main(int argc, char *argv[])
{
	int res, g, h;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	g = _atoi(argv[1]);
	h = _atoi(argv[2]);
	res = g * h;

	printf("%d\n", res);

	return (0);
}
