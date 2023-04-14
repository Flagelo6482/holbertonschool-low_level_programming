#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Function that reads a text file and prints
 *@filename: File
 *@letters: Number of letters
 *
 *Return: Number of letters in a file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	total = read(fd, buffer, letters);

	write(STDIN_FILENO, buffer, total);

	if (fd == -1 || total == -1 )
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (total);
}
