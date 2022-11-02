#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0, n;
	char *buf;

	if (!filename)
		return(-1);

	while (text_content[len])
		len++;
	
	n = len + 1;
	
	buf  = malloc(sizeof(char) * n);

	if (!buf)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY, 0600);
	w = write(o, text_content, n);

	if (o == -1 || w == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (1);
}
