#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * &c: The chacter to ptint
 * Return: On succecc 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
