#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct pointer
{
	char *symbol;
	void (*print_symbol)(va_list arg);
} pointer_t;

int _printf(const char *format, ...);
int _count(const char *format, int i);
int _putchar(char c);
char *_store_memory(const char *s, int length);
char *_equal(const char *s, char *str, int length);
char _parameter(const char *s, int i);
void print_double(va_list arg);
void print_int(va_list arg);

#endif /*MAIN_H*/
