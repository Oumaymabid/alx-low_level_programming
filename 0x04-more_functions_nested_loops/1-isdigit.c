#include "main.h"
/**
  *_isdigit - checks digits between 0 and 9
  *@c: the chart to be checked
  *Return: 1 or 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
