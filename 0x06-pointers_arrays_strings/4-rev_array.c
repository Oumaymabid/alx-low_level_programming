#include "main.h"
/**
  *reverse_array - reverses the content of an array of integers
  *@a: int one
  *@n: int two
  *Return: always 0
  */
void reverse_array(int *a, int n)
{
	int m;
	int k;

	for (m = 0; m < n--; m++)
	{
		k = a[m];
		a[m] = a[n];
		a[n] = k;
	}
}
