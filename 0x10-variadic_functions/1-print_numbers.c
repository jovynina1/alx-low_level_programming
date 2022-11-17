#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * void print_numbers - prints numbers followed by a new line
 * @n: number of integers passed to the function
 * @s: string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	i = 0;

	va_start(num, n);
	while (i < n)
	{
		printf("%d", va_arg(num, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(num);
}







