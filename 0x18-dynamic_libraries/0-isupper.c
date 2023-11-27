#include "main.h"

/**
 * _isupper - To checks for Uppercase characters
 * @c: The characters to be checked
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
