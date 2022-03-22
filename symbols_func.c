#include "main.h"

/**
 * _count - count caracters of string
 * @s1: string
 *
 * Return: length
 */

void print_double(va_list arg)
{

	printf("%d\n", va_arg(arg, int));
	/*
	if (va_arg(arg, int) / 10 != 0)
		_putchar(va_arg(arg, int) / 10);

	_putchar(va_arg(arg, int) % 10);*/
}

void print_int(va_list arg)
{
	if (va_arg(arg, int) > 0)
		while (va_arg(arg, int) / 10 != 0)
		{
			


		}




		_putchar((va_arg(arg, int) / 10) + '0');

	_putchar(va_arg(arg, int) % 10);
}
