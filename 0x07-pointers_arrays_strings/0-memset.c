#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: string pointer for memory area to be filled
* @b: - character to fill memory with
* @n: - number of bytes to be set to be filled with character
*
* Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] =  b;
}
return (s);
}
