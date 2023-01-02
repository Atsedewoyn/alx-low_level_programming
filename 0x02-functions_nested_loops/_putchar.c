#include<unistd.h>
/**
 * _putchar _writes the character c to stdout
 *@c: te character to print
 * Return: on success 1.
 * on error:-1 is rwturned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
