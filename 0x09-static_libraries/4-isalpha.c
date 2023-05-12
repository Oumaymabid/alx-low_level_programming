#include "main.h"
/**
  *_isalpha - checks alphabeticl char
  *@c: input
  *Return: 0 or 1
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
