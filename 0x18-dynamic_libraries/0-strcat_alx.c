/**
 * _strcat  This function is to concatenate two strings
 * (dest is appended with src)
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: return a pointer to the resulting concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destination_len = 0;

	while (src[i] != '\0')
	{
		dest[destination_len] = src[i];
		destination_len++;
		i++;
	}
	dest[destination_len] = '\0';

	return (dest);
}
