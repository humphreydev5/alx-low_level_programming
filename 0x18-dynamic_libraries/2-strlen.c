#include "main.h"

/**
 * _strlen - The length of string
 * @s: The string length
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
