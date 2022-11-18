#include "variadic_functions.h"

/**
 * sum_them_all - adds num
 * @n: parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, x, sum;

	if (n == 0)
		return (0);

	va_start(valist, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(valist, int);
		sum = sum + x;
	}
return (sum);
	 va_end(valist);

return (0);
}
