#include "main.h"

/**
 * get_bit - This gets the value of a bit at a given index.
 * @n: The bit.
 * @index: This is the index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 * Otherwise - This is the  value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int maxim = 0x01;

	maxim <<= index;

	if (maxim == 0)
		return (-1);

	if ((n & maxim))
		return (1);
	else
		return (0);
}
