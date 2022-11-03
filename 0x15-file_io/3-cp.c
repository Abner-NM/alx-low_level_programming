#include "main.h"

/**
 * buffer - function allocates 1024 buytes to a buffer
 * @filename: name of file
 *
 * Return: pointer to the buffer
*/
char *buffer(char *filename)
{
	char *buf;

	buf  = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * close_fd - closes files descriptors
 * @fd: file descriptor to close
*/
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguements supplied
 * @argv: array of pointers to arguements
 *
 * Return: Always 0 on succes
*/
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(dest, buf, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(src, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buf);
	close_fd(src);
	close_fd(dest);

	return (0);
}
