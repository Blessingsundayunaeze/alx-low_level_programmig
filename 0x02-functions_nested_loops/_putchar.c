#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character c
 * @c: the character to print
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
