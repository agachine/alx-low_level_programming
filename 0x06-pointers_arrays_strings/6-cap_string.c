#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @str: string to be modified
* Return: returns char
*/
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 32 && str[i] <= 47)
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] = str[i + 1] - 32;
}
}
}
return (str);
}
