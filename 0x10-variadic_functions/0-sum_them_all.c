#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - returns the sum of all its parameters
* @n: numbet of arguments
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
va_start(ap, n);
unsigned int i = 0, unsigned sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int); 
}
va_end(ap);
return sum;
}
