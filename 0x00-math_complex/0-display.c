#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - print complex numbers
 * @c: complex
 */

void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%.0f\n", c.re);
	}
	else
	{
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
}