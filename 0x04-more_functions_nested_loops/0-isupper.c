#include "main.h"
/**
 * _isupper - detect upper case alphabets characters
 *
 * @c: input character
 *
 * Return: (1) for true  and (0) for value
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
