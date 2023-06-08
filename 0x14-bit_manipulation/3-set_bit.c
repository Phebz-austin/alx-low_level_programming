#include "main.h"

/**
 * set_bit - THis will set a bit at given index to 1
 * @n: will point to the number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 indicates failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
