#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @c: char to intialize the array
* @size: the size of the memory to print
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
if (size == 0)
{
return (NULL);
}
str = (char *)malloc(size);
if (str == NULL)
{
return (NULL);
}
else
{
i = 0;
while (i < size)
{
str[i] = c;
i++;
}
}
return (str);
}
