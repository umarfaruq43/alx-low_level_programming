#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing base of 6
 *
 * Return: Always (0) success
 */
int main(void)
{
	char digit, letter;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
