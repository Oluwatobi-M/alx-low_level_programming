#include "main.h"

/**
 * *_memcpy - function copies bytes from memeory area to memory area
 * @n: number of bytes to copy
 * @src:memory area to copy from
 * @dest: destination memory area
 *
 * Return: pointer to dest
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
