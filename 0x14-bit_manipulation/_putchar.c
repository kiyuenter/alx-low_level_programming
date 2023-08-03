#include <unistd.h>

/**
 * _putchar = write the characters for all
 * @c: The character to print
 *
 * return 1.
 * On error, -1 is returned, and zero is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
