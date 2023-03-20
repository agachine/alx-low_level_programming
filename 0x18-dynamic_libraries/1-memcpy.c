#include "main.h"
/**
* _memcpy - copies memory area
* @dest: string to be copied to
* @src: - string to be copied
* @n: - number of bytes to be copied
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
