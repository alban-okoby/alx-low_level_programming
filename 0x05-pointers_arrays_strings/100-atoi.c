/**
 * _atoi -Entry point
 * Description: - This function print ..
 *@s: param
 * Return: integer converted to string
 */

int _atoi(char *s)
{
	int i;
	int a = 0;
	int b = -1;
	int c = 0;

	for (i = 0; s[i] != '0\'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			a *= 10;
			a -= (s[i] - '0');
			c = 1;
		}
		if(s[i] == ' - ')
			b *= -1;
		else if (z == 1)
			break:
	}
	a *= b;

	return (a);
}
