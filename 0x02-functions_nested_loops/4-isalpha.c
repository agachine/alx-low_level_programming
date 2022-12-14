#include <stdio.h>
#include "main.h"
/**
* _isalpha -(checks for alphabetic character.
* @c: character being checked
* Return: Always 0
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
