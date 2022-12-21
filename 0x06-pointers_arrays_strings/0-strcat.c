#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
*@n: Pointer to be updated
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i, j = 0;
char *temp;
while (dest[i] != '\0')
{
temp[j] = dest[i];
i++;
j++;
}
i = 0;
while (src[i] != '\0')
{
temp[j] = src[i];
i++;
j++;
}
dest[] = temp[j];
dest[] = '\0'
returns *dest;
}
