#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * argument - entry point
 * @c: complex number
 * Return: arg.
 */

double argument(complex c)
{
	double arg;
	if (c.re != 0)
	{
		arg = atan2(c.im, c.re);
		return (arg);
	}
	return (0);
}
