#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *cr_buffer(char *file);
void close_f(int fd);

/**
 * cr_buffer - Allocate 1024 characters
 *@file: Name the file
 *Return: Pointer
 */
char *cr_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_f - Closes files
 *@fd: Close file descriptor
 */
void close_f(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the contents of one file to another
 *@argc: Number of arguments
 *@argv: Array of pointer to the arguments
 *Return: Int
 */
int main(int argc, char *argv[])
{
	int from, o, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	buffer = cr_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(o, buffer, r);

		if (o == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		r = read(from, buffer, 1024);
		o = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	close_f(from);
	close_f(o);

	return (0);
}
