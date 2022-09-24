#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src,
 * including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
