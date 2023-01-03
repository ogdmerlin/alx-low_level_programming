#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: 0 Success,none error
 *
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar('');
		}
	}
        putchar ('\n');
	RETURN (0);
}
		
