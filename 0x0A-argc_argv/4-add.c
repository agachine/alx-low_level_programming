#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - print program arguments
* StringCheck - check whether argument is a digit
* @s: parameter to be checked 
* @argc: argument count
* @argv: string
* Return: nothing
*/
int StringCheck(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}
int main(int  argc, char  *argv[])
{
int j;
int sum = 0;
if (argc <= 1)
{
printf("0\n");
}
else
{
for (j = 1; j < argc; j++)
{
if (StringCheck(argv[j]))
{
sum += atoi(argv[j]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", sum);
}
return (0);
}
