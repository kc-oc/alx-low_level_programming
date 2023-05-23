#include "main.h"

/**
 * create_file - This creates a file
 * @filename: The filename.
 * @text_content: This is the content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int ff;
	int nletters;
	int rr;

	if (!filename)
		return (-1);

	ff = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ff == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rr = write(fd, text_content, nletters);

	if (rr == -1)
		return (-1);

	close(ff);

	return (1);
}
