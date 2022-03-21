#include "main.h"

/**
 * _count - count caracters of string
 * @s1: string
 *
 * Return: length
 */

char _parameter(const char *s, int i, ...)
{
	int b = 0;

	pointer_t symbol_func[] = {
		{"d", print_double},
		{"i", print_int},
		{NULL, NULL}
	};
	
	va_list list;

	va_start(symbol_func, s);

	for (b = 0; symbol_func[b].symbol != s[i]; b++)
		return (_count(s[i++], ...));


}
