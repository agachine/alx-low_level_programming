#include <stdlib.h>
#include <stdio.h>
/**
* main - print program arguments
* @argc: argument count
* @argv: string
* Return: nothing
*/
int main(int  argc, char  *argv[])
{
int mul;
if (argc > 2)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
