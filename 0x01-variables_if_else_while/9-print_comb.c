#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Possible combinations of single-digit numbers.
 *
 * Return: Alyaws (0) success
 */
int main(void)
{
	int start = 0;

	while (start <= 9)
	{
		putchar(start + '0');

		if (start != 9)
		{
			putchar(',');
		}

		putchar(' ');

		start++;
	}
	putchar('\n');

	return (0);
}
