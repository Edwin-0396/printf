#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


struct pointer
{
	char * symbol;
	void (*print_symbol)(va_list arg);
}pointer_t;


int _printf(const char *format, ...);
int _count(const char *format, ...);
int _putchar(char c);
char *_store_memory(const char *s, int length, ...);
char *_equal(const char *s, char *str, int length);
char _parameter(const char *s, int i);

#endif /*MAIN_H*/
