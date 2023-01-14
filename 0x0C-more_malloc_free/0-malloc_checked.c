#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - allocates memory using malloc
*@b: memory in bytes allocates 
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(b);
}
return (ptr);
}
