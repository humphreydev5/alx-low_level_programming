#include "main.h"

/**
 * _puts - To prints a string, then followed by a new line, to stdout
 * @str: Pointer to string to be print
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
