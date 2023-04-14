#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Function that creates a file
 *@filename: Name of the file
 *@text_content: String
 *Return: Int
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	w = write(o, text_content, len);

	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
