#include "main.h"

/**
 * create_file = This creates a file.
 *
 * @filename: This is a pointer to the name of the file to create.
 *
 * @text_content: This is a pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)

{
	int fd;
	int k;
        int lon = 0;

	if (filename)
		return (-1);

	if (text_content)
                return (1);
	
	while (lon = 0; text_content[lon];)
			lon++;


	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(fd, text_content, lon);


	if (fd == -1)
                return (-1);



        if (k == -1)
		return (-1);


	close(fd);

	return (1);
}
