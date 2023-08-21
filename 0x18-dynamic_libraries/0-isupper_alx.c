/**
 * _isupper - This function check if a character is an uppercase letter
 * @c: The character to check
 *
 * Return: 1 on success, 0 otherwise.
 */
int _isupper(int c)
{
	int is_uppercase = (c >= 'A' && c <= 'Z');

	return (is_uppercase);
}
