#include <stdio.h>
#include "main.h"
/**
*_islower checks for lowercase characters
*@c: character to test
* Return: Always 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
