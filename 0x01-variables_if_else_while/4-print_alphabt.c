#include <stdio.h>

/**
 * main - Entry point
 * Description: print all letters except from q and e
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);	
}