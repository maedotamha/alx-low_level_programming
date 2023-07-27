#include "main.h"
/**
  *_strncpy - Copies one string onto another
  *@dest: Input value
  *@src: Input value
  *@n: The integer input
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
