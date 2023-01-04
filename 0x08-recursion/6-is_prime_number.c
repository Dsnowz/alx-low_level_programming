/**
 * prime - function
 * @n: the number
 * @i: the number
 * Return: Always 0.
 */

int prime(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
			return (0);
		else
			return
				(prime(n, i - 1));
	}
	else
		return (1);
}
