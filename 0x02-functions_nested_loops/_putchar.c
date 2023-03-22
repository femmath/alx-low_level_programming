#include "main.h"
	#include <unistd.h>
	/**
	 * main - Main Entry
	 * _putchar - 'writes the character c to stdout'
	 * @c: The character to print
	 * Description: 'This is a Program to to putchar c'
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

