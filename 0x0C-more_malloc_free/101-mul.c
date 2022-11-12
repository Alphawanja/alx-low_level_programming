#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: 1 if number else 0
 */
int _isnumber(char *s)
{
	int i, j, k;

	k = 0, j = 1;
	for (i = 0; *(s + i) != 0; i++)
	{
		k = isdigit(*(s + i));
		if (k == 0)
		{
			j = 0;
			break;
		}
	}
	return (j);
}

/**
 * _callocX - reserves memory initialized to 0
 * @nmemb: number of bytes
 *
 * Return: pointer
 */
char *_callocX(unsigned int nmemb)
{
	unsigned int i;
	char *p;

	p = malloc(nmemb + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	p[i] = '\0';
	return (p);
}

/**
 * main - multiplies inf numbers
 * @argc: number of cmd line args
 * @argv: cmd line args
 *
 * Return: no return
 */

int main(int argc, char **argv)
{
	int i, j, l1, l2, lful, mul, add, ten, ten2, t1, zer = 0;
	char *res;

	if (argc != 3 || _isnumber(argv[1]) == 0 || _isnumber(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	l1 = strlen(argv[1]), l2 = strlen(argv[2]);
	lful = l1 + l2;
	res = _callocX(lful);
	if (res == 0)
		printf("Error\n"), exit(98);
	for (i = l2 - 1; i >= 0; i--)
	{
		ten = 0, ten2 = 0;
		for (j = l1 - 1; j >= 0; j--)
		{
			t1 = i + j + 1;
			mul + (argv[1][j] - '0') * (argv[2][i] - '0') + ten;
			ten = mul / 10;
			add = (res[t1] - '0') + (mul % 10) + ten2;
			ten2 = add / 10;
			res[t1] = (add % 10) + '0';
		}
		res[t1 - 1] = (ten + ten2) + '0';
	}
	if (res[0] == '0')
		zer = 1;
	for (; zer < lful; zer++)
		printf("%c", res[zer]);
	printf("\n");
	free(res);
	return (0);
}
