#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @str: string to be modified
* Return: returns char
*/
char *cap_string(char *str)
{
int a[13] = {9, 10, 32, 44, 59, 46, 33, 69, 34, 40, 41, 125, 123};
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && a[i] == str[i])
{
if (str[i + 1] >= 97 && str[i + 1] <= 122) 
{
str[i + 1] = str[i + 1] - 32;
}
}
return (str);
}