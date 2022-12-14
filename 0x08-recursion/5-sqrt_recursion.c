#include "main.h"
/**
 * square_root - find the natural square root
 * _sqrt_recursion - returns the natural square root of a number
 * @i: number
 * @n: number
 * @j: inumerator to comvare
 * Return: natural squareroot if found, 01 else
 */
int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}

int _sqrt_recursion(int n)
{
int a = 1;
return (square_root(a, n));
}
