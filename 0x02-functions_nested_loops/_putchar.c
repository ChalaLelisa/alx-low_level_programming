#include <unistd.h>
/**
 * _putchar -b writes the character c to stout
 * @c: the character to print
 *
 * Return: On succeess 1.
 * on eroor, -1 is returned. and errno is set appropriately
 */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
