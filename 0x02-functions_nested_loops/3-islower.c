#include "main.h"

/**
 * _islower - check if the given character is lowercase.
 * @c: character to test.
 *
 * Return: 1 (True) if it is lowercase, else 0 (False).
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}
