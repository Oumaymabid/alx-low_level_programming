#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - sum
  *@n: input
  *@...: number for parameteres
  *Return: 0 success
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int j, sum = 0;

	va_start(p, n);

	for (j = 0; j < n; j++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
