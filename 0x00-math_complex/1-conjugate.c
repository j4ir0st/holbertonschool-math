#include <stdio.h>
#include "holberton.h"

/**
 * conjugate - print complex numbers
 * @c: complex
 */

complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
