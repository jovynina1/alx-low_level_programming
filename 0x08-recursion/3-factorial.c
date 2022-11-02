#include "main.h"

/**
 * factorial - find the factorial of n
 * @n: number to find factorial of
 * Return: the factorial of n
*/
int factorial(int n)
{


	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n-1));
	else
		return (n);
}
