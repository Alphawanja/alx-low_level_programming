#include "main.h"

/**
 * binary_to_unit - converts a binary to an
 * unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int la;
	int len, base;

	if (!b)
		return (0);

	la = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			la += base;
		}
	}

	return (la);
}
