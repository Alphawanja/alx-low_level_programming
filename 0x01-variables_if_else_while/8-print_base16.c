#include <stdio.h>

/**
 * main - prints numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 16; num++)
		putchar((num % 16) + '0');

	putchar('\n');

	return (0);
}
