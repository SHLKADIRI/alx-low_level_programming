#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: numbers of bytes yo allo
 * Return: a pointer to the allo memo
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
