#include "main.h"
/**
  *positive_or_negative - print whether the variable i is positive or negative
  *@i: the char to be checked
  *Return: if the number is greater than 0: is positive
  *if the number is 0: is zero
  *if the number is less than 0: is negative
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negatuve\n", i);
	else
		printf("%d is zero\n", i);
}
