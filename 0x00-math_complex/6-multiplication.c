#include "holberton.h"
#include <stdio.h>

/**
 * multiplication - check the code for Holberton School students.
 * @c1: complex number1
 * @c2: complex number2
 * @c3: result complex
 * Return: Always 0.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re * c2.re - c1.im * c2.im;
	c3->im = c1.im * c2.re + c2.im * c1.re;
}
