#include "main.h"
/**
 * _isalpha - tells if a character is an alphabet
 * @c: character to be checked
 * Return: 1 if a character is an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
