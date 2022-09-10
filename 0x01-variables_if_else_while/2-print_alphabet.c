#include <stdio.h>

/**
 * main- this is the entry of the file
 *
 * Describtion- wanna print a-z
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
        char alpha = 'a', sec = 'A';

        while (alpha <= 'z')
        {
                putchar(alpha);
                alpha++;
        }

        while (sec <= 'Z')
        {
                putchar(alpha);
                sec++;
        }

        putchar('\n');

        return (0);
}