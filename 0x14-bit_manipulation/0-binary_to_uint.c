#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: char string
 * Return: converted decimal numberor 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int kidus, power;
	int zip;

	if (b == NULL)
		return (0);

	for (zip = 0; b[zip]; zip++)
	{
		if (b[zip] != '0' && b[zip] != '1')
			return (0);
	}

	for (power = 1, total = 0, zip--; zip >= 0; zip--, power *= 2)
	{
		if (b[zip] == '1')
			kidus += power;
	}

	return (kidus);
}
