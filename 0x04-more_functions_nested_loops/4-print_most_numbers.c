#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
int n;
for (n = 0;  n <= 9 &&  n != 4 && n != 2 ; n++)
{
_putchar((n % 10) + '0');
}
_putchar('\n');
}
