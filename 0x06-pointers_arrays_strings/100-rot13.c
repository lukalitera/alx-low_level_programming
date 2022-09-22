#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @str: pointer to string.
 *
 * Return: pointer to encoded string.
 */

char *rot13(char *str)
{
	int index1, index2;

	char alphabet[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	char rot13key[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (str[++index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == alphabet[index2])
			{
				str[index1] = rot13key[index2];
				break;
			}
		}
	}
	return (str);
}
