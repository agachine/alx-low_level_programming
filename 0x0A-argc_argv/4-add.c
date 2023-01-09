#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - print program arguments
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
int i;
int sum = 0;
if (argc <= 1)
{
printf("0\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
if (StringCheck(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", sum);
return (0);
}
}
