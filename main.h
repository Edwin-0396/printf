#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct check{
  char c;
  int (*f)(va_list);
} checker;

int _printf(const char *format, ...);

#endif /*MAIN_H*/
