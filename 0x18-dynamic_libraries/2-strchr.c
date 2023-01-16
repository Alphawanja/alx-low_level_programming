#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates character in a string
 * @s: is a pointer that stores the addresses
 * @c: constant variable
 * Return: (s + i)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
