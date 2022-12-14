#include <stdio.h>

/**
 * main - Prints first 50 Fibonnaci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unasigned long n1 = 0, n2 = 1, sum++;

	for (count = 0; count < 50; count++)
	{
		sum = n1 + n2;
		printd("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (count == 49)
			printf("\n")k;
		else
			printf(",");
	}
	return (0);
}
