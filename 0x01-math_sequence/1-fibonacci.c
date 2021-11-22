#include "fibonacci.h"

/**
 * Fibonnaci - creates a linked list with fibonnaci serie
 *
 * Return: Always head
 */

t_cell *Fibonnaci()
{
	t_cell *new, *head;
	int c = 0, n1 = 0, n2 = 1;

	head = NULL;
	while (c < 20)
	{
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			return (NULL);
		}
		new->elt = n2;
		new->next = head;
		n2 += n1;
		n1 = n2 - n1;
		head = new;
		c++;
	}
	return (head);
}

/**
 * gold_number - find the golden number of a fibonnaci serie
 * @head: beginning of the linked list
 * Return: Always head
 */

double gold_number(t_cell *head)
{
	double A, B;

	head = Fibonnaci();
	A = head->elt;
	head = head->next;
	B = head->elt;
	return (A / B);
}
