#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
char str[60] = "The alphabet letters in lowercase and uppercase are:\n";
putchar(str[60]);
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
