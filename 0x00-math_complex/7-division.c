#include "holberton.h"
#include <stdio.h>

/**
 * division - check the code for Holberton School students.
 * @c1: complex number1
 * @c2: complex number2
 * @c3: result complex
 * Return: Always 0.
 */

void division(complex c1, complex c2, complex *c3)
{
	complex f1, f2;

	f1.re = c1.re * c2.re - c1.im * c2.im * (-1);
	f1.im = c1.im * c2.re + c2.im * (-1) * c1.re;

	f2.re = c2.re * c2.re - c2.im * c2.im * (-1);
	f2.im = c2.im * c2.re + c2.im * (-1) * c2.re;

	c3->re = f1.re / f2.re;
	c3->im = f1.im / f2.re;
}
