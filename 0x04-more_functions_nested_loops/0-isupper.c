#include "main.h"
#include <stdio.h>

/**
 * _isupper -> Enrty point
 *
 * Description: checking if c is lower or upper case.
 * @c: an input cahracter.
 * Return: (1) if c is uppercase and (0) is Lowercase.
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
