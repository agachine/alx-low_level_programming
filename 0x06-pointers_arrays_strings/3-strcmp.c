#include "main.h"
#include <stdio.h>
/**
* _strcmp - compares two strings
* @s1: input parameter string
* @s2: input parameter string
* Return: value
*/
int _strcmp(char *s1, char *s2)
{
int a;
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
a = s1[i] - s2[i];
return (a);
}
