#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if the operation is successful, -1 if it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is within the valid range */
    if (index > 63)
        return (-1);

    unsigned int mask = 1 << index; /* Create a mask with the bit to clear */

    /* Check if the bit at the specified index is already 0 */
    if (*n & mask)
        *n ^= mask; /* Clear the bit if it is set */

    return (1); /* Return 1 to indicate success */
}

