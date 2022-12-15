#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower cases 10x
 */
void print_alphabet_x10(void)
{
	char p;
	char i;

	for (p = 0; p <= 10; p++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
	putchar('\n');
}
