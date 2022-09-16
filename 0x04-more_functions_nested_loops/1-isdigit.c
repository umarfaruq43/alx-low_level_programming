#include "main.h"

/**
 * _isdigit - Entry point
 * @c: A input value
 * Description: Checking if the didgt is greter than 9
 * Return: Either 0 or 1 depending on the condition
 */

int _isdigit(int c)
{

	while (c >= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
