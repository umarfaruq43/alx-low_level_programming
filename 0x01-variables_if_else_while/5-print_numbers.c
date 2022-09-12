#include <stdio.h>

/**
* main - Entry point
*
* Description: 'Printing numbers to the surface'
*
* Return: Always 0 (Success)
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
