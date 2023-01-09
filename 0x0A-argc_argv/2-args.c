#include "main.h"
#include <stdio.h>
/**
* main - print program arguments
* @argc: argument count
* @argv: string
* Return: nothing
*/
int main(int  argc, char  *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
