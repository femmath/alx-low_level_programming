#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: the name of the file created.
 * @text_content: the string to be writen to the file.
 *
 * Return: 1 on success, -1 on failure         
 */

int create_file(const char *filename, char *text_content)
{
	int Nfile, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Nfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(Nfile, text_content, len);

	if (Nfile == -1 || w == -1)
		return (-1);

	close(Nfile);

	return (1);
}
