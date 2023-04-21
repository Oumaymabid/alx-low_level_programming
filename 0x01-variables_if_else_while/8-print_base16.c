#include <stdio.h>
/**
  *main - entry point
  *Description: prints all the numbers of base 16 in lowercase
  *Return: O (success)
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
