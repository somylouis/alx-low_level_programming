#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint_num = uint_num << 1;
		if (b[i] == '1')
			uint_num += 1;
		i++;
	}
	return (uint_num);
}

