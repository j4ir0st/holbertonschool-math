#include "holberton.h"
#include <stdio.h>

/**
 * multiplication - check the code for Holberton School students.
 * @m: complex number1
 * @arg: complex number2
 * @c3: result complex
 * Return: Always 0.
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
