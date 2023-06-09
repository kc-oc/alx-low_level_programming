#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file
 * @filename: this is  the  name of the file
 * @text_content: the NULL terminated string to add at end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdr;
	int nletters;
	int o;

	if (!filename)
		return (-1);

	fdr = open(filename, O_WRONLY | O_APPEND);

	if (fdr == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		o = write(fdr, text_content, nletters);

		if (o == -1)
			return (-1);
	}

	close(fdr);

	return (1);
}
