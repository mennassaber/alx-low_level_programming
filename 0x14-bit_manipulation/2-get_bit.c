#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int input.
 * @index: The index of the bit.
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int i;

    /* Check if the index is within the range of a long int */
    if (index < 64)
    {
        /* Iterate through each bit of the number */
        for (i = 0; i <= 63; n >>= 1, i++)
        {
            /* Check if the current index matches the specified index */
            if (index == i)
            {
                /* Return the value of the bit at the specified index */
                return (n & 1);
            }
        }
    }

    /* Return -1 if the index is out of range */
    return (-1);
}

