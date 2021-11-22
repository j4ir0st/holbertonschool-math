#include "heron.h"

/**
 * _abs - check the code for Holberton School students.
 * @n: number
 * Return: Always 0.
 */

double _abs(double n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

/**
 * heron - sequence to aproximate the square root of number
 * @p: number to aproximate its square root
 * @x0: initial value
 * Return: The beggining of the linked list
 */
t_cell *heron(double p, double x0)
{
	t_cell *new, *tmp, *head;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
	{
		return (NULL);
	}
	new->elt = x0;
	x0 = (0.5) * (x0 + (p / x0));
	new->next = NULL;
	head = new;
	if (_abs((x0 * x0) - p) <= 0.0000001)
	{
		return (head);
	}
	head = heron(p, x0);
	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (head);
}
