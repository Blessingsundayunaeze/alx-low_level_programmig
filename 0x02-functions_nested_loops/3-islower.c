#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Character to print
 * Return: Return 1 if c is a lower casa 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
