#include "main.h"
#include <stdio.h>

/**
 * main - function prints name of itself
 * @argc: int
 * @argv: char * pointer to array
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
