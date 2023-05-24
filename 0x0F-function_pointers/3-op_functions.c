#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
  *op_add - returns sum
  *@a: input
  *@b: input
  *Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - returns substraction
  *@a: input
  *@b: input
  *Return: substraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - returns multiplication
  *@a: input
  *@b: input
  *Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - returns division
  *@a: input
  *@b: input
  *Return: division
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod -  returns modulo
  *@a: input
  *@b: input
  *Return: modulo
  */
int op_mod(int a, int b)
{
	return (a % b);
}
