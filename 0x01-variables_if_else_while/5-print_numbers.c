#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 success
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		printf("%i", start);
		start++;
	}
	putchar('\n');
	return (0);
}