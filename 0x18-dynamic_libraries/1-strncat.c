#include "main.h"

/**
 * _strncat - To concatenate or add 2 strings
 * @src: source value
 * @n: Limit of the concatenation
 * @dest: Destination or the  final result
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
