#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * specifics_c - print a simple character
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_c(va_list arg)
{
  _putchar(va_arg(arg, int));
  return (0);
}

/**
 * print_c - print a simple string
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_s(va_list arg)
{
	int length = 0;
	char *str = va_arg(arg, char *);

	if (!str)
		return (0);

	for(; str[length]; length++)
		_putchar(str[length]);

	return (0);
}

/**
 * print_pc - print a simple porcentage
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_pc(va_list arg)
{
	_putchar(va_arg(arg, char *));
	return (0);
}

/**
 * print_i - print a integrer
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_i(va_list arg)
{
	int a = va_arg(arg, int);

	if (a < 0)
	{
		_putchar('-');
		a = -a;
	}
	
	if (a / 10 != 0)
		_putchar((a / 10) + '0');

	_putchar((a % 10) + '0');
	return (0);
}

/**
 * print_d - print a double number
 * @arg: pointer to list arguments
 *
 * Return: number
 */

int print_d(va_list arg)
{
	int number;
	unsigned int posivite, size_d, obs_size_d = 1, store = 0;

	number = va_arg(arg, int);

	if (number < 0)
	{
		_putchar('-');
		positive = number * -1;
	}
	else
		positive = number;

	size_d = positive;
	while (size_d > 9)
	{
		size_d = size_d / 10;
		obs_size_d = obs_size_d * 10;
	}
	while(obs_size_d >= 1)
	{
		store = store + _putchar(((positive / obs_size_d) % 10) + '0');
		obs_size_d = obs_size_d / 10;
	}

	return (store);
}
