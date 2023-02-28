/**
 * _atoi -Entry point
 * Description: - This function print ..
 *@s: param
 * Return: integer converted to string
 */

int _atoi(char *s)
{
	unsigned int nbre = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			nbre = (*s - '0') + (nbre * 10);
		else if (nbre > 0)
			break;
	} while (*s++);

	return (nbre * sign);
}
