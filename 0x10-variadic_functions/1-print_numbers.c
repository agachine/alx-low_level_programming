#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_number - prints numbers
*@n: number of integers passed to the function
*@separator: string to be printed between numbers
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
