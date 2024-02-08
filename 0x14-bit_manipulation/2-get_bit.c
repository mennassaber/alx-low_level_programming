#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /*
     * Check if index is within the bounds of the data type.
     * If index is greater than or equal to the number of bits in an
     * unsigned long int, return -1 indicating an error.
     */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    /*
     * Right shift the number n by index bits, effectively bringing
     * the bit at the specified index to the least significant position,
     * and then perform a bitwise AND operation with 1 to retrieve
     * the value of the bit.
     */
    return ((n >> index) & 1);
}

