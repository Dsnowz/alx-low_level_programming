#include<stdio.h>

/**
 * remplace13 - a

/**
 * rot13 - a function ...
 * @str: the chaine of caractere
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i = 0;
	/*char alp[] =
	 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";*/
	/*char cde[] =
	 "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";*/

	while (str[i])
	{
		str[i] = remplace13(str[i]);
		i++;
	}
	return (str);
}
