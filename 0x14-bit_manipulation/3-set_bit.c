#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit to set.
 *
 * Return: 1 if the operation is successful, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is within the valid range */
    if (index > 63)
        return (-1);

    unsigned int mask = 1 << index; /* Create a mask with the bit to set */
    *n |= mask; /* Set the bit at the specified index */

    return (1); /* Return 1 to indicate success */
}

