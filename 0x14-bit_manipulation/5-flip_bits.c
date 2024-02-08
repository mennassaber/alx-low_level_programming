#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to transform
 *             one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int bit_count = 0; /* Initialize the count of differing bits */

    /* Iterate through each bit of the numbers */
    while (n || m)
    {
        /* Check if the least significant bits of both numbers differ */
        if ((n & 1) != (m & 1))
            bit_count++; /* Increment the count if the bits differ */

        /* Right-shift both numbers to compare the next bit */
        n >>= 1;
        m >>= 1;
    }

    return bit_count; /* Return the count of differing bits */
}

