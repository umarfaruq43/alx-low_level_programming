#include <stdio.h>

/**
 * main - Entry point
 * describtion- wanna print a-zA-Z
 *
 * Return 0 - success
 */
int main()
{
        char alpha = 'a';
        char beta = 'A';

        while (alpha <= 'z')
        {
                putchar(alpha);
                alpha++;
        }

        while (beta <= 'Z')
        {
                putchar(beta);
                beta++;
        }

        putchar('\n');

        return (0);
}
