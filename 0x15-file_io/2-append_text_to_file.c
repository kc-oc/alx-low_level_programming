#include "main.h"

/**
 * append_text_to_file - This is appends text at the end of a file.
 *
 * @filename: This is a pointer to the name of the file.
 *
 * @text_content: The is a string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int m, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	k = write(m, text_content, len);

	if ( m == -1 )
            return (-1);

           ( k == -1 )
		return (-1);

	close(m);

	return (1);
}
