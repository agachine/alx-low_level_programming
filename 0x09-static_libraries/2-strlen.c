#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the length of a string
*@s: string whose length is checked
* Return: length.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
