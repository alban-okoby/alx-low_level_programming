#include "main.h"

/**
 * convert_day - the converts day function
 * description - convert day function
 * @m: month
 * @d: day of month
 * @y: year
 * Return: day of year
 */

int convert_day(int m, int d)
{
	switch (m)
	{
		case 2:
		    d += 31;
		    break;
		case 3:
		    d += 59;
		    break;
		case 4:
		        d += 90;
		        break;
		case 5:
		        d += 120;
		        break;
		case 6:
		        d += 151;
		        break;
		case 7:
		        d += 181;
		        break;
		case 8:
		        d += 212;
		        break;
		case 9:
		        d += 243;
		        break;
		case 10:
		        d += 273;
		        break;
		case 11:
		        d += 304;
		        break;
		case 12:
		        d += 334;
		        break;
		default:
		       break;
	}
	return (d);
}

