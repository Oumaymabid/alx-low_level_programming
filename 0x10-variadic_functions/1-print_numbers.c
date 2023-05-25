#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - prints numbers, followed by a new line
  *@separator: input
  *@n: input
  *@...: input
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numset;
	unsigned int j;

	va_start(numset, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numset, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numset);
}
