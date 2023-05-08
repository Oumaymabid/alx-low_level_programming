#include <stdio.h>
#include "main.h"
/**
  *print_diagsums - prints the sum of the two diagonals of a square matrix
  *@a: input
  *@size: input
  *Return: 0 success
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
