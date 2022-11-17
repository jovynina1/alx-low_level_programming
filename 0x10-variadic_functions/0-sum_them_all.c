#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all arguments
 * @n: Number of arguments to be summed up
 * Return: return 0, if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	if (n == 0)
		return (0);

	va_start(args, n);

	int i, sum = 0;


	for (i = 0, i < n; i++;)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}




