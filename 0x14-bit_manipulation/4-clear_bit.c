#include "main.h"

/**
 * clear_bit - It will sets the value of a bit to 0
 * @n: will point out the number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 indicates failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
