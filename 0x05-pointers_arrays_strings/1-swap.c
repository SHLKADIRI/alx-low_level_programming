
#include "main.h"

/**
 * reset_to_98 - function that pointer to an int
 * @a: first input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

