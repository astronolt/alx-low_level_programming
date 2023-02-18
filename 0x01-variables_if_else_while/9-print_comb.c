#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all possible combos of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
