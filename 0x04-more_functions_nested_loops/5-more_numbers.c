#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return: 0 is success
 */
void more_numbers(void)
{
	char c;
	char b;

	for (c = 1; c <= 10; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}

