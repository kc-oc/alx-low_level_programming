#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - This appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, const char *text_content)
{
	int fdr;
	ssize_t nletters;
	ssize_t o;

	if (!filename)
		return (-1);

	fdr = open(filename, O_WRONLY | O_APPEND);
	if (fdr == -1)
		return (-1);

	if (text_content)
	{
		nletters = strlen(text_content);
		o = write(fdr, text_content, nletters);
		if (o == -1)
		{
			close(fdr);
			return (-1);
		}
	}

	close(fdr);
	return (1);
}
