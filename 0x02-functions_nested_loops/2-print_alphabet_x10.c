#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: 0 is success
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
	for (c = 97; c <= 122; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
