#include "main.h"

/**
 * _count - count caracters of string
 * @s1: string
 *
 * Return: length
 */

char *_equal(const char *s, char *str, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		str[i] = s[i];
		_putchar(str[i]);
		if (s[i] == '%')
			return ('\0');
	}

	str[i] = _putchar('\n');
	free(str);
	return (str);
}
