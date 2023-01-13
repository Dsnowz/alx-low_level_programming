#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c;
	int *i;
	float *f;
	double *d;

	printf("%p\n", (void *)c);
	printf("%p\n", (void *)i);
	printf("%p\n", (void *)f);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
