#include "main.h"

/**
 * binary_to_unit - function that converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int k = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		k <<= 1;
		k += b[i] - '0';
		i++;
	}
	return (k);
}
