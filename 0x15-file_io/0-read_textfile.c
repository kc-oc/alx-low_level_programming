#include "main.h"

/**
 * read_textfile - This is to read text file print to STDOUT.
 * 
 * @filename: This is the text file being read.
 * 
 * @letters: This is the number of letters to be read.
 *
 * Return: This is the w- actual number of bytes read and printed 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t t;
	ssize_t k;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	        return (0);
		
	
	bf = malloc(sizeof(char) * (letters + 1));

	if (!bf)
		return (0);
	
	t = read(fd, bf, letters);
	k = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fd);
	return (k);

}
