#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @dest: input parameter string
* @src: input parameter string
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int j;
int i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
