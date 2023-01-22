#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_strings - prints strings
*@n: number of strings passed to the function
*@separator: string to be printed between numbers
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int i;
va_list strings;
va_start(strings, n);
if (separator == NULL)
 separator = "";
for (i = 0; i < n; i++)
{
s = va_arg(strings, char*);
if (s == NULL)
{
s = "nil";
}
printf("%s", va_arg(strings, char*);
if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}
