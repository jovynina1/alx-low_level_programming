#include <unistd.h>

/**
 * _putchar  writes character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putcghar(char c)
{
	return(write(1, &c, 1))
}