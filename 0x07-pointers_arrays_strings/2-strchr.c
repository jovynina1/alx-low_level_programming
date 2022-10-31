#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to search from
 * @c: character to search for
 * Return: character to the first occurence of c
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
