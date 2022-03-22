#include "main.h"

/**
 * this is a new test
 *
 */

int _printf(const char *format, ...)
{
  
    int i = 0, j = 0;    

    pointer_t symbol_func[] = {
      {"d", print_double},
      {"i", print_int},
      {NULL, NULL}
    };
    va_list list;

    va_start(list, format);

    while (format[i] && format && format[i])
    {
      j = 0;
      if (format[i] == '%')
      {
        i++;
        while (symbol_func[j].symbol)
        {
          if (*(symbol_func[j].symbol) == format[i])
          {
            symbol_func[j].print_symbol(list);
            break;
          }
          j++;
        }
      }
      i++;
    }

    va_end(list);
    _count(format, 0);
  return (0);
}
