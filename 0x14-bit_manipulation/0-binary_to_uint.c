#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: The converted number,
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			decimal = (decimal * 2) + (b[i] - '0');
		else
			return (0);
	}

	return (decimal);
}
