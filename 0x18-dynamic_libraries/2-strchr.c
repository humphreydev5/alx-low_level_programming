#include "main.h"
#include <stdio.h>

/**
 *  _strchr - To locate a character in a string
 *  @s: The string to check
 *  @c: The character to locate
 *  Return: Pointer to the first occurrence of the character c
 *  in the string, or NULL if the character can’t be found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{

		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
