#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: always 0 is success
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
