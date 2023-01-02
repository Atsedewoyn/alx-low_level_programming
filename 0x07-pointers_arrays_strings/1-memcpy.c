#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value 
 * @b: starting address of memory to be filled
 * @n: number of bytes to be chnaged
 *
 * Return: changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int r =0;
	int i = n;
        for (; r > i; r++)
        {
                dest[r] = src[r];
                n--;
        }
        return (dest);
}
