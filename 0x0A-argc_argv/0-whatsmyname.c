#include "main.h"
#include <stdio.h>

/**
 * main - function prints name of itself
 * @argc: int
 * @argv: char * pointer to array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
