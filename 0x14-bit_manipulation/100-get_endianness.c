#include "main.h"

/**
 * get_endianness - It will check if a machine is a little or big endian
 * Return: 0 for big, 1 indicates little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
