#include <stdio.h>
#include "main.h"
/**
  *main - print its own name
  *@argc: count of arguments
  *@argv: vector of arguments
  *Return: 0 success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
