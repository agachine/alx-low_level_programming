#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @index: 0 based index
 * Return: 1 or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
