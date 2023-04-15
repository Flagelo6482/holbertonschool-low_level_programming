#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letras;
	char *bufer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bufer = malloc(sizeof(char) * letters);
	if (bufer == NULL)
	{
		close (fd);
		return (0);
	}

	letras = read(fd, bufer, letters);

	write(STDOUT_FILENO, bufer, letras);

	close(fd);

	return (letras);
}