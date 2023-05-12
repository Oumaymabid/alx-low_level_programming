#include "main.h"
/**
  *_isupper - print uppercase letters
  *@i: input character
  *Return: 1 or 0
  */
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
