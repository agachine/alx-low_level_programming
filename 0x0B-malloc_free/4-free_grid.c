#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - Entry point
* @grid: rows of matrix
* @height: columns of string
* Return: a pointer to a 2 dimensional array of integers of null
*/
void free_grid(int **grid, int height)
{
int i;
int *p;
while (i < height)
{
p = grid[i];
free(p);
i++;
}
free(grid);
}
