#include "main.h"

/**
 * _count - count caracters of string
 * @s1: string
 *
 * Return: length
 */

char *_store_memory(const char *s, int length, ...)
{
	char *str;

	str = malloc(sizeof(char) * length);
	if(!str)
		return (NULL);
	
	return (_equal (s, str, length, ...));
}
