#include <stdio.h>
/**
  *main - entry point
  *Description: 'prints all single digit numbers of base 10 starting from 0'
  *Return: 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
