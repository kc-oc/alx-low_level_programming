#include "main.h"

/**
 * get_endianness - This checks the endianness.
 * Return: If big-endian - 0, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return *c;
}
