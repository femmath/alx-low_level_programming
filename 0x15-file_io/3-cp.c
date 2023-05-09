#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer – creates a new buffer of size 1024.
 * @file: the buffer used to store the chars.
 *
 * Return: Points to the buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file – Close the file descriptor.
 * @fd: Name of the file descriptor to be closed.
 */
void close_file(int fd)
{
	int Cfile;

	Cfile = close(fd);

	if (Cfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * 		If file_from does not exist or cannot be read - exit code 98.
 * 		If file_to cannot be created or written to - exit code 99.
 * 		If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int Sfile, Dfile, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	Sfile = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	Dfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, 
"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(Dfile, buffer, r);
		if (Dfile == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(Sfile, buffer, 1024);
		Dfile = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(Sfile);
	close_file(Dfile);

	return (0);
}
