#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions"

/**
 * print_strings - print strings with a new line
 * @n: number of strings passed to the function
 * @s: string to be printed between the strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *word;
	unsigned int i;

	va_start(words, n);
	i = 0;

	while (i < n)
	{
		word = va_arg(words, char *);
		if (word != NULL)
			printf("%s", word)
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(words);
}
