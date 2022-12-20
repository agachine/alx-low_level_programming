#include "main.h"
#include <stdio.h>
/**
* swap_int - swaps the values of two integers
*@*a: Integer to be swapped
*@*a: Integer to be swapped
* Return: nothing.
*/
void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
