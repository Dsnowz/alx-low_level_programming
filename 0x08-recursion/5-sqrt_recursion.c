#include <stdio.h>
/**
 * _sqrt -function
 * @n: the number
 * @i: the number
 * Return: Always 0
 */

int _sqrt(int n, int i)
{
	if (i * > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
