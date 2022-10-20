#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: int to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)

{
	int y = 0;
	{

	if (c >= '0' && c <= '9')
		y = 1;
	}

	return (y);
}

