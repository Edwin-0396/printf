#include "main.h"

/**
 * _count - count caracters of string
 * @s1: string
 *
 * Return: length
 */

int _count(const char *s1)
{
	int i;

	for (i = 0; s1; i++)
	{
		if (s1[i] == '\n')
			return (*_store_memory(s1, i));
	}
	return (i);
}