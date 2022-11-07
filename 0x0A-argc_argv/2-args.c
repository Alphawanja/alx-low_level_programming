#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all the arguments it recieves
 * @argc: int
 * @argv: char * pointer to array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
