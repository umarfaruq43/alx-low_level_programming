#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Describtion: Print a - z
 */

void  print_alphabet_x10(void)
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
