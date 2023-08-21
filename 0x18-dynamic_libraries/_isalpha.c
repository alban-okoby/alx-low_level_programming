/**
 * _isalpha - Function to  check if a character is
 * alphabetic (either uppercase or lowercase)
 * @c: The character to check
 *
 * Return: 1 on sussess, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'));
}
