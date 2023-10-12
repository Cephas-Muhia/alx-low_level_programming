#include "main.h"

/**
 * _isalpha - check if the given character is alphabetic.
 * @c: character to test.
 *
 * Return: 1 (True) if it is alphabetic, else 0 (False).
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

