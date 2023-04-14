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
	ssize_t o, w, r;
	char *bufer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
	{
		close(o);
		return (0);
	}

	bufer = malloc(sizeof(char) * letters);

	if (bufer == NULL)
		return (0);

	r = read(o, bufer, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, bufer, r);

	if (w == -1 || w != r)
		return (0);

	close(o);
	return (w);
}
