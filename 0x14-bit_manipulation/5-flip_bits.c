#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from one number
 * to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int bits = 0;
    unsigned long int xor = n ^ m;

    while (xor != 0)
    {
        bits += xor & 1;
        xor >>= 1;
    }

    return (bits);
}
