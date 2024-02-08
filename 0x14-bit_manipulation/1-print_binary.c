#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int n)
{
    /* Create a mask to isolate the rightmost bit */
    unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
    int flag = 0; /* Flag to track leading zeros */

    /* Iterate through each bit of the number */
    while (mask > 0)
    {
        /* Check if the current bit is set */
        if (n & mask)
        {
            /* Set flag to indicate the first non-zero bit */
            flag = 1;
            /* Print '1' if the bit is set */
            _putchar('1');
        }
        else if (flag) /* If leading zeros are already printed */
        {
            /* Print '0' if the bit is not set */
            _putchar('0');
        }

        /* Shift the mask to the right by one bit */
        mask >>= 1;
    }

    /* If the input number was zero, print '0' */
    if (!flag)
        _putchar('0');
}

