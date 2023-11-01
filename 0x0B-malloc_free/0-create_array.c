#include "main.h"

/**
 * create_array - creates an array of a specific size.
 * @size: size of the array to create.
 * @c: character to fill the array with.
 *
 * Return: If successful, a pointer to the allocated memory, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

