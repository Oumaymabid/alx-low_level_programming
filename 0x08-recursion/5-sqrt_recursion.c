#include "main.h"
/**
  *_sqrt_recursion - returns the natural square root of a number
  *@n: input number
  *Return: 0 success
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
  *actual_sqrt_recursion - returns the natural square root of a number
  *@n: input number
  *@i: iterator
  *Return: 0 success
  */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
