#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @dest: input parameter string
* @src: input parameter string
* @n: 
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (dest[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
}
return (dest);
}
