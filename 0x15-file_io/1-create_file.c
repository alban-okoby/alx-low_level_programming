#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 * Return: return 1 otherwise -1
 *
 * Explained : This program implements a function
 *  called create_file() which creates a new file and
 *   writes specified content to it as input.
 *   The function takes as input the name of
 *   the file to create (filename) and the
 *   content to write in the file (text_content).
 * The function starts by checking if the file name
 * (filename) is valid. If filename is NULL, the
 * function returns -1 to indicate an error.
 * Then the function calculates the length of the
 * text_content string using a for loop and stores
 * it in the lenght_len variable.Then the function uses the
 * open() function to create a new file and access it in read
 * and write mode. If the file already exists, the O_TRUNC
 * open mode will overwrite the contents of the existing
 * file. If the file does not exist, the O_CREAT open mode will
 * create a new file. The function also uses the 0600 parameter
 * to set file access permissions.
 * Then the function uses the write() function to write the content
 * of text_content to the file. If the write fails, the function
 * returns -1 to indicate an error.
 * Finally, the function uses the close() function to close the
 * file and returns 1 to indicate successful execution.
 * It is important to note that if text_content is NULL,
 * the function will create an empty file. If the length of
 * text_content is 0, the function will also create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int open_op, write_wr, lenght_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght_len = 0; text_content[lenght_len];)
			lenght_len++;
	}

	open_op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_wr = write(open_op, text_content, lenght_len);

	if (open_op == -1 || write_wr == -1)
		return (-1);

	close(open_op);

	return (1);
}
