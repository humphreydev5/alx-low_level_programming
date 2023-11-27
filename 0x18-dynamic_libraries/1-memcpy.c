#include "main.h"

/**
 *  _memcpy - To copy memory area
 *  @src: The memory area copied from
 *  @dest: The memory are copied to
 *  @n: number of bytes
 *  Return: To pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
