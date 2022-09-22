#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @s: pointer to string.
 *
 * Return: pointer to encoded string.
 */

char *rot13(char *s)
{
	int index1, index2;

	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};
	char rot13key[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L','M'};
	while (s[++index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (s[index1] == alphabet[index2])
			{
				s[index1] = rot13key[index2];
				break;
			}
		}
	}
	return (s);
}		
