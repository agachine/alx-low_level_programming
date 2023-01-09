#include "main.h"
/**
* _strspn -  gets the length of a prefix substring
* @accept: substring whose length is to be determined
* @s: string where the substring is located
* Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length, i;

for (length = 0; *(s + length); length++)
{
for (i = 0; *(accept + i) ; i++)
{
if (*(s + length) == *(accept + i))
break;
}
if (!*(accept + i))
break;
}
}
