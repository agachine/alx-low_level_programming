#include "main.h"
#include <stdio.h>
/**
* _isdigit - check for digits between 0 to 9
*@c: character to be checked
* Return: 1 if digit is between 0 to 9,  0 otherwise
*/
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
