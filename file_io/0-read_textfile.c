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
	ssize_t let_w, total, fd;
	char *buffer;

	if (filename == NULL)
		return (STDIN_FILENO);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (STDIN_FILENO);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (STDIN_FILENO);
	}

	total = read(fd, buffer, letters);

	let_w = write(STDIN_FILENO, buffer, total);

	close(fd);

	return (let_w);
}
