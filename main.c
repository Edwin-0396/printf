#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  /*char str[] = "where str is a big string\n";

  printf("%d", _printf("Let's print a simple sentence.\n"));
  printf("%d", printf("Let's print a simple sentence.\n"));
  printf("Let's print a simple sentence.\n");
  printf("%d: ", printf("%c\n", 'S'));
  printf("%d: ", _printf("%c\n", 'S'));
  _printf("A char inside a sentence: %c. Did it work?\n", 'F');
  printf("A char inside a sentence: %c. Did it work?\n", 'F');
  _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
  printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
  _printf("%s", "This sentence is retrieved from va_args!\n");
  printf("%s", "This sentence is retrieved from va_args!\n");
  _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
  printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
  _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
  printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
  _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
  printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
  _printf("%%\n");
  printf("%%\n");
  _printf("Should print a single percent sign: %%\n");
  printf("Should print a single percent sign: %%\n");
  _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
  printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
  _printf("css%ccs%scscscs\n", 'T', "Test");
  printf("css%ccs%scscscs\n", 'T', "Test");
  _printf(str);
  printf(str);
  _printf("man gcc:\n%s", str);
  printf("man gcc:\n%s", str);
  _printf("%c\n", '\0');
  printf("%c\n", '\0');
  _printf("%\n");
  printf("%\n");
  _printf("%!\n");
  printf("%!\n");

  printf("%");
  _printf("%");
  
  _printf("%K\n");
  printf("%K\n");
  _printf(NULL);*/
  int l = 1500;

_printf("%d\n", 1024);
printf("%d\n", 1024);
_printf("%d\n", -1024);
printf("%d\n", -1024);
_printf("%d\n", 0);
printf("%d\n", 0);
_printf("%d\n", INT_MAX);
printf("%d\n", INT_MAX);
_printf("%d\n", INT_MIN);
printf("%d\n", INT_MIN);
_printf("%d\n", l);
printf("%d\n", l);
_printf("There is %d bytes in %d KB\n", 1024, 1);
printf("There is %d bytes in %d KB\n", 1024, 1);
_printf("%d - %d = %d\n", 1024, 2048, -1024);
printf("%d - %d = %d\n", 1024, 2048, -1024);
_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("%i\n", 1024);
printf("%i\n", 1024);
_printf("%i\n", -1024);
printf("%i\n", -1024);
_printf("%i\n", 0);
printf("%i\n", 0);
_printf("%i\n", INT_MAX);
printf("%i\n", INT_MAX);
_printf("%i\n", INT_MIN);
printf("%i\n", INT_MIN);
_printf("%i\n", l);
printf("%i\n", l);
_printf("%i\n", l);
printf("%i\n", l);
_printf("There is %i bytes in %i KB\n", 1024, 1);
printf("There is %i bytes in %i KB\n", 1024, 1);
_printf("%i - %i = %i\n", 1024, 2048, -1024);
printf("%i - %i = %i\n", 1024, 2048, -1024);
_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("%d == %i\n", 1024, 1024);
printf("%d == %i\n", 1024, 1024);
_printf("iddi%diddiiddi\n", 1024);
printf("iddi%diddiiddi\n", 1024);
_printf("%d\n", 10000);
printf("%d\n", 10000);
_printf("%i\n", 10000);
printf("%i\n", 10000);





  return (0);
}
