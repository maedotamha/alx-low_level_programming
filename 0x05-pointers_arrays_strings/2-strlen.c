#include "main.h"
/**
  *_strlen - returns the length of the string
  *@s: the string that we enter
  *Return: length
  */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
