#include "main.h"

/**
 * print_alphabet - Entry point
 *
 *
 * Return: On success 0.
 *
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
