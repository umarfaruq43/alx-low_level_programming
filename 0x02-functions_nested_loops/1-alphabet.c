#include "main.h"

/**
 * main - Entry point
 *
 * Description: Printing a - z using C
 *
 * Return: Always (0) success.
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
