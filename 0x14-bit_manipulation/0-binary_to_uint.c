#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * int binary_to_uint - converts a binary number to an unsigned int
 *
 * Return: converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_num = 0;
int i;
if (b == NULL)
return (0);
i = 0;
while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
{
dec_num <<= 1;
dec_num += b[i] - '0';
i++;
}
else
return (0);
}
return (dec_num);
}
