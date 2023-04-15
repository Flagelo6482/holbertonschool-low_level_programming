#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Function that appends text at the end of a file
 *@filename: File name
 *@text_content: String
 *
 *Return: Int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	w = write(o, text_content, len);

	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
