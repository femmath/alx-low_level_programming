#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to the POSIX standard output.
 * @filename: the text file to be read
 * @letters: the contents to be read
 * Return: w-  the number of bytes read and printed
 *        0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	Nfile = open(filename, O_RDONLY);
	if (Nfile == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(Nfile, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(Nfile);
	return (w);
}
