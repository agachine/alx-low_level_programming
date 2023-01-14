#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat  - allocates memory using malloc
*@s1: string 1
*@s2: string 2
*@n: limit 
* Return: ptr.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
{
i++;
}
j = 0;
while (s2[j] != '\0')
{
j++;
}
ptr = malloc(sizeof(char) * (i + n + 1));
if (ptr == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
if (n >= j)
{
n = j;
}
j = 0;
while (j < n)
{
ptr[i] = s2[j];
j++;
i++;
}
ptr[i] = '\0';
return (ptr);
return (0);
}
