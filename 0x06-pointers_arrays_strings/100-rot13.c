#include "main.h"

/**
  * rot13 - function to encode
  * Return: n after encryption
  * @n: plaintext
  *
  *
  *
  */
char *rot13(char *n)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}

	return (n);
}
