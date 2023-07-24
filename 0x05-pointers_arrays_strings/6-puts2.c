#include "main.h"
/**
  *puts2 - function thats prints only one char
  *@str: Input
  *Return: void
  */
void puts2(char *str)
{
	int leng = 0, i;

	while (str[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i < leng; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
