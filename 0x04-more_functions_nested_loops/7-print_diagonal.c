#include "main.h"

/**
 * print_diagonal - draws a diagonal line using '\'
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int diag;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
			_putchar('\');
	}
	_putchar('\n');
}
