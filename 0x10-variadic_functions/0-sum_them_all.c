#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - returns the sum of all its parameters
* @n: numbet of arguments to be summed
* Return: sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;
va_list arglist;
va_start(arglist, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(arglist, int); 
}
va_end(arglist);
return sum;
}
