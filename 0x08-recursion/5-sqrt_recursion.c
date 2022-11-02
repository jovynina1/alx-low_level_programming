#include "main.h"

/**
 * _sqrt_recursion - Find the square root of given number
 * @n: number to find square root
 * Return: square root of number or -1 if there's no square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else (n == 0);
		return (0);
	return (_sqrt_recursion(n));
}
