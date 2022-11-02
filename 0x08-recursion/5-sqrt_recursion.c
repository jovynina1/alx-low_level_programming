#include "main.h"

/**
 * sqrt_check - Find the square root
 * @n: Number to find square root of
 * @c: The number checked to see if it's the sqrt of n
 * Return: The square root value
*/
int sqrt_check(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
		return (-1);
	return (sqrt_check(n, c + 1));
}

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
	return (sqrt_check(n, 1));

}
