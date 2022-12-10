#include <stdio.h>

/**
 * main - prints hexadecimaal
 * Return: success
 */
int main(void)
{
	int num;
	char i;

	for (num = 0; num < 10; num++)
		putchar(num);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
