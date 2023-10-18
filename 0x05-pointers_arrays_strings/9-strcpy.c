#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copies a string pointed to by src to a buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest; /* Store the original dest address */

	if (dest == NULL || src == NULL)
	{
		return (NULL); /* Handle null pointers */
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Ensure null termination */
	return (original_dest);
}

