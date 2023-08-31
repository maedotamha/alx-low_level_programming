#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *i;

	num = 1;
	i = (char *) &num;
	return ((int)*i);
}
