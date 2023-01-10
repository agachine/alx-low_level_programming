#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string given as parameter
*
* Return: Nothing.
*/
char *_strdup(char *str)
{
unsigned int i, j;
char *p;
int n;
i = 0;
while (str[i] != '\0')
{
n++;
i++;
}
p = (char *)malloc(sizeof(char) * n);
if (str == NULL)
{
return (NULL);
}
if (p == NULL)
{
return (NULL);
}
else
{
j = 0;
while (str[j] != '\0')
{
p[j] = str[j];
j++;
}
}
return (p);
}
