#include "main.h"
/**
 * print_line - draws straight line in the terminal
 * @n: length of line to be printed
 */
void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int line;
for (line = 0; line < n; line++)
{
_putchar(95);
}
_putchar('\n');
}
}
