#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: the file to append text to.
 * @text_content: The string to append to the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *         -1 If filename is NULL or if you do not have the required permissions 
 *	      to write the file
 *          1- if the file exists and -1 if the file does not exist 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Nfile, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Nfile = open(filename, O_WRONLY | O_APPEND);
	w = write(Nfile, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(Nfile);

	return (1);
}
