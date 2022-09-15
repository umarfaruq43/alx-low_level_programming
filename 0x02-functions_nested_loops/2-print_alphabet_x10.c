#include "main.h"

/**
 * main - Entry point
 *
 * Describtion: Print a - z
 */

void print_alphabet(void)
{
	int a;
	int start;

	for (start = 1; start <= 10; start++)
	{
		for (a = 'a'; a < 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
