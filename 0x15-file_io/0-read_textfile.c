#include "main.h"
#include <fcntl.h>
#include <unistd.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @buffer: a pointer to a buffer to store the file contents in
 * @size: the size of the buffer
 * Return: the number of bytes read and printed, or 0 on error
*/

ssize_t read_textfile(const char *filename, char **buffer, size_t size)

{
	int fd;
	ssize_t nread, nwritten;

	if (!filename || !buffer || size == 0)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	*buffer = malloc(size);
	if (!*buffer)
	return (0);

	nread = read(fd, *buffer, size - 1);
	if (nread == -1)
	return (0);

	(*buffer)[nread] = '\0';
	nwritten = 0;
	while (nwritten < nread)
	{
	ssize_t n = write(STDOUT_FILENO, *buffer + nwritten, nread - nwritten);
	if (n == -1)
	return (0);
	nwritten += n;
	}

	close(fd);
	return (nwritten);
}
