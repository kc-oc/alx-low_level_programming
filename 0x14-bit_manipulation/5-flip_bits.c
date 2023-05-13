#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: This is how many bit flips are needed to equal m for n
 * @m: This the number to set other equal
 *
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flips = 0;

	while (xor > 0)

	{
		flips += (xor & 1);
		xor >>= 1;
	}

	return flips;
}
