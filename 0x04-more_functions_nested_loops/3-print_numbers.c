#include "main.h"

/**
 * print_numbers - check the code
 * Description: print int 0 - 9 with putchar
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
