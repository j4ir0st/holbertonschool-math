#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - print complex numbers
 * @c: complex
 */

void display_complex_number(complex c)
{
	char sgn;

	if (c.im > 0)
	{
		sgn = '+';
	}
	else
	{
		sgn = '-';
		c.im = -c.im;
	}
	if (c.im == 0)
	{
		printf("%.9g\n", c.re);
	}
	else if (c.re == 0)
	{
		(c.im == 1) ? printf("i\n") : printf("%c %.9gi\n", sgn, c.im);
	}
	else
	{
		if (c.im == 1)
		{
			printf("%.9g %c i\n", c.re, sgn);
		}
		else
		{
			printf("%.9g %c %.9gi\n", c.re, sgn, c.im);
		}
	}

}
