#include <stdio.h>

/**
 * main - Entry Point
 *
 * return: 0 if no error, non zero error.
 *
 */

int main(void)
{
	int i;
	char hexavalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexavalues[i]);
	}
	putchar('\n');
	return (0);
}
