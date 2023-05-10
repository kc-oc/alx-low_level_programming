#include "main.h"
#include <stdlib.h>

/**
 * read_textfile = This is to read text file print to STDOUT.
 * 
 * @filename: This is the text file being read.
 * 
 * @letters: This is the number of letters to be read.
 *
 * Return: This is the w- actual number of bytes read and printed.
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;
	ssize_t t;
	ssize_t k;
	ssize_t fd;


	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	
	
	
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (k);

}
