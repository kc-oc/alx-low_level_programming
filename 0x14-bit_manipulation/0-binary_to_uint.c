#include "main.h"

/**
 * binary_to_uint - This converts a binary number to an unsigned int.
 * @b: A pointer to binary string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, riz = 0, lon = 0;

	if (b == NULL)
		return (0);

	while (b[lon])
		lon++;

	while (lon)
	{
		if (b[lon - 1] != '0' && b[lon - 1] != '1')
			return (0);

		if (b[lon - 1] == '1')
			riz += base;
		base *= 2;
		lon--;
	}
	return (riz);
}
