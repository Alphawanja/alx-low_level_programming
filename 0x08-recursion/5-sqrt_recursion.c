#include "main.h"

/**
 * sqrt_loop - finds natural squareroot, if it exists
 * @n: variable hoplding natural square root
 * @m: varable of origin inputted value
 * Return: The natural square root, or -1 if one does not existt
 */
int sqrt_loop(int m, int n)
{
	if (n == m * m)
		return (n / m);
	else if (n < m * m)
		return (-1);
	return (sqrt_loop(m + 1, n));
}
/**
 * _sqrt_recursion - check the code
 * @n: original value
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	return (sqrt_loop(1, n));
}
