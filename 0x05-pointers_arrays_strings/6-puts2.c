#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: string to be printed
 */

void puts2(char *str)
{
	int c;
	char 1;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			1 = str[c];
			_putchar(1);
		}
	}

	_putchar('\n');
}
