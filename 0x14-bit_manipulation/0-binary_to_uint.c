#include "main.h"

unsigned int binary_to_uint(const char *binary_string)
{
    int index;
    unsigned int decimal_value = 0;

    if (!binary_string)
        return (0);

    for (index = 0; binary_string[index]; index++)
    {
        if (binary_string[index] < '0' || binary_string[index] > '1')
            return (0);
        decimal_value = 2 * decimal_value + (binary_string[index] - '0');
    }

    return (decimal_value);
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
