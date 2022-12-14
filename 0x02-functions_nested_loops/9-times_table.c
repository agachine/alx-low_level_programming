#include <stdio.h>
#include "main.h"
/**
*times_table - prints the 9 times table
*
* Return: Always 0
*/
void times_table(void)
{
int n, m, g;
for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
g = m * n;
if (m < 9)
{
if (g <= 9)
{
_putchar(g + '0');
_putchar (',');
_putchar (' ');
_putchar (' ');
}
else
{
_putchar((g / 10) + '0');
_putchar((g % 10) + '0');
_putchar (',');
_putchar (' ');
}
}
else
{
if (g <= 9)
{
_putchar(g + '0');
}
else
{
_putchar((g / 10) + '0');
_putchar((g % 10) + '0');
}
}
}
_putchar('\n');
}
}
