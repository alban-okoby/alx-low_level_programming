/**
 * get_endianness - determines the byte order on the current machine
 *
 * Description: This function is used to determine the byte order in the binary
 * representation of integers on the current machine.
 *
 * Return: 1 if the computer uses a "little-endian" system,
 * 0 if the computer uses a "big-endian" system.
 */
int get_endianness(void)
{
	int nbre = 1;
	char *the_byte_pointer = (char *)&nbre;

	if (*the_byte_pointer == 1)
		return (1);
	else
		return (0);
}
