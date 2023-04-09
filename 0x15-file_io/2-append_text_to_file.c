#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to the content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_op, write_wr, length_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length_len] != '\0')
			length_len++;
	}

	open_op = open(filename, O_WRONLY | O_APPEND);
	write_wr = write(open_op, text_content, length_len);

	if (open_op == -1 || write_wr == -1)
		return (-1);

	close(open_op);

	return (1);
}
