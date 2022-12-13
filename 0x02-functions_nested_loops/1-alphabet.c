#include "main.h"

/**
 * print_alphabet - prints the alphabet inlower cases
 * return: void
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
