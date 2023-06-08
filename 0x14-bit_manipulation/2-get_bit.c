#include "main.h"

/**
 * get_bit - This will return value of a bit at an index in a deci num
 * @n: The numb to search
 * @index: This is index of the bit
 *
 * Return: value of this bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
