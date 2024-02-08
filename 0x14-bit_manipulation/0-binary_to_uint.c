#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented as a string to an
 *                  unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The equivalent unsigned int value of the binary string,
 *         or 0 if @b is NULL or contains characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* Initialize the result to 0 */
	int len, base_two; /* Variables for length and base calculation */

	/* Check if the input string is NULL */
	if (!b)
		return (0);

	/* Calculate the length of the binary string */
	for (len = 0; b[len] != '\0'; len++)
		;

	/* Iterate through the binary string from right to left */
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		/* Check if the current character is not '0' or '1' */
		if (b[len] != '0' && b[len] != '1')
		{
			return (0); /* Return 0 if the input is not a valid binary string */
		}

		/* Add the corresponding power of 2 to the result if the bit is '1' */
		if (b[len] == '1')
		{
			result += base_two;
		}
	}

	return (result); /* Return the calculated unsigned int value */
}

