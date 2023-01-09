#include "main.h"
#include <stdio.h>
/**
* main: print program name
* @argc: argument count
* @argv[]: string
* Return: nothing 
*/
int main(int  argc, char __attribute__((unused)) *argv[])
{
if (argc != 0)
{
printf("%d\n", argc-1);
}
return (0);
}
