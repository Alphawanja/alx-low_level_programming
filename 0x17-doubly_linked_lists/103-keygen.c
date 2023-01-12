#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int h;
	int v;
	unsigned int num;

	h = *usrn;
	v = 0;

	while (v < len)
	{
		if (h < usrn[v])
			h = usrn[v];
		v += 1;
	}

	srand(h ^ 14);
	num = rand();

	return (num & 63);
}

/**
 * f5 - multiplies each char of username
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;
	
	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x717866636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph[(len ^59) & 63];
	/*____________f2_________*/
	ch = vch = 0;
	while (vch < len
