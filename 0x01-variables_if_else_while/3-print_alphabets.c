#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
char i[2] = "\n";
char str[60] = "The alphabet letters in lowercase and uppercase are:\n";
putchar(str[40]);
for (c = 'a'; c <= 'Z'; c++)
{
putchar(c);
}
putchar(i[2]);
return (0);
}
