#include "main.h"

/**
 * _printf -write in console
 * @format: string
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
  va_list arg;
  unsigned int count;
  int (*f)(va_list);

  if (!format || !*format)
    return (-1);
  
  va_start(arg, format);
  for(count = 0; format[count]; count++)
    {
      if (format[count] == '%')
      {
	count++;
	if(format[count] != '%' && format[count] != 'd'
	   && format[count] != 'i' && format[count] != 'c'
	   && format[count] != 's')
	  {
	    _putchar(format[count - 1]);
	    _putchar(format[count];
	  }
	      
	    else
	      {
		f = get_fuction(format[count]);
		f(arg);
	      }
      }
      else
	_putchar(format[count]);

      }
      va_end(arg);
      return(count);
}
