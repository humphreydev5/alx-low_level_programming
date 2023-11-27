#include "main.h"

/**
 * _isdigit -  To check for a digit number 0 - 9
 * @c: The int to be checked
 * Return: 1 if c is a digit, otherwise 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

