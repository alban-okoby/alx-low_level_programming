#include "main.h"
#include <stdlib.h>

/**
 ** read_textfile - Entry point
 * @filename: the name of the file
 * @letters: number of letters
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_op, read_rd, byte_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_op = open(filename, O_RDONLY);
	read_rd = read(open_op, buffer, letters);
	byte_wr = write(STDOUT_FILENO, buffer, read_rd);

	if (open_op == -1 || read_rd == -1 || byte_wr == -1 || byte_wr != read_rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_op);

	return (byte_wr);
}
