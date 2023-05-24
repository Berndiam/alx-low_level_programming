#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - This returns the addition of two numbers.
* @a: The 1st number.
* @b: Show the second number.
*
* Return: The addition of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - This returns the diff of two numbers.
* @a: The 1st numb
* @b: The 2nd num
*
* Return: The diff of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - This returns the product of two numbers.
* @a: The 1st number.
* @b: Shows the 2nd number.
*
* Return: The prod of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - This returns the div of two numbers.
* @a: The 1st numb.
* @b: The 2nd number
*
* Return: Must be the quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - This returns the remainder of the division of two numbers.
* @a: The 1st number
* @b: The 2nd number
*
* Return: The remaining division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
