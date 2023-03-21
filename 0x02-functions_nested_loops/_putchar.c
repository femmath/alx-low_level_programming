#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: Th character to print
 * 
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
