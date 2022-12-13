#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
char str[40] = "The alphabet letters in lowercase are:\n";
putchar(str[40]);
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
return (0);
}
