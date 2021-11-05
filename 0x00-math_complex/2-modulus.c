#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * modulus - check the code for Holberton School students.
 * @c: complex number
 * Return: Always 0.
 */

double modulus(complex c)
{
	double mod;

	mod = sqrt((c.re * c.re) + (c.im * c.im));
	return (mod);
}
