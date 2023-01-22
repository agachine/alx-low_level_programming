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
va start(ap, n);
int i = 0, sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int); 
}
va end(ap);
return sum;
}
