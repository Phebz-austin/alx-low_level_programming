#include "main.h"

/**
 * get_endianness - will check if a machine is little or big endian
 * Return: 0 is for big, 1 is for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
