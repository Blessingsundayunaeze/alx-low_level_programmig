#include <stdio.h>
#define MAXSTRING 80

/**
 * main - printing putchar and new line
 * Return - Always 0
 */
int main(void)
{
	char message[] = "_putchar";
	int count;

	for (count = 0; count < MAXSTRING; count++)
	{
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(message[count]);
	}
	return (0);
}
