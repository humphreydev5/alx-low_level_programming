#include "main.h"

/**
 * *_strcat - To concatenates or add 2 strings
 * @src: the string to be added
 * @dest: the string to be added to
 * Return: to concatenated string
 */
char *_strcat(char *dest, char *src)
{
        int i = 0;
        int dl = 0;

        while (dest[i++])
                dl++;
        for (i = 0; src[i]; i++)
                dest[dl++] = src[i];
        return (dest);
}
